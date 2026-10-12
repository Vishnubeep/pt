#include <stdio.h>

int main() {
    int loaded_wt, tractor_weight;
    double rate_per_quintal;
    int read = scanf ("%d %d %lf", &loaded_wt, &tractor_weight, &rate_per_quintal);
    (void) read;
    int net_wt = loaded_wt - tractor_weight;
    double net_wt_quintal = (double) net_wt/100;
    double amount = net_wt_quintal * rate_per_quintal;
    printf("Net weight (kg): %d\n", net_wt);
    printf("Net weight (quintal): %.2f\n", net_wt_quintal);
    printf("Amount payable: %.2f\n", amount);
    return 0;
}