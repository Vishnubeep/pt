#include <stdio.h>
int main(){
    int units, sanctioned_load, demand_load;
    double power_factor;
    int read = scanf("%d %d %d %lf",&units,&sanctioned_load,&demand_load,&power_factor);
    (void) read;
    double energy_charges = units * 6.40;
    double seventyfive = 0.75 * demand_load;
    int useMd = (seventyfive > sanctioned_load);
    double billable_demand = seventyfive*useMd+sanctioned_load * (1-useMd);

    double demandCharges = 210.0*billable_demand;
    int pfHundredths = (int)(power_factor*100.0+0.5);
    int steps_above = (pfHundredths-95)*(pfHundredths>95);
    int steps_below = (90-pfHundredths)*(pfHundredths<90);

    double incentive = steps_above*0.005*energy_charges;
    double penalty = steps_below*0.01*energy_charges;
    double adjustment = penalty - incentive;

    double net_bill = energy_charges + demandCharges + adjustment;

    printf("Energy charge (Rs.): %.2f\n", energy_charges);
    printf("Demand charge (Rs.): %.2f\n", demandCharges);
    printf("Power factor adjustment (Rs.): %.2f\n", adjustment);
    printf("Net bill (Rs.): %.2f\n", net_bill);
    return 0;
}