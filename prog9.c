#include <stdio.h>
int main(){
    int crop_code, notified_on_time;
    double areaHa, loss_percent;
    if(scanf("%d %lf %lf %d", &crop_code,&areaHa, &loss_percent, &notified_on_time)!=4){
        return 1;
    }
    int sum_insurance_perHa;
    switch(crop_code){
        case 1:
            sum_insurance_perHa = 87000;
            break;
        case 2:
            sum_insurance_perHa = 41000;
            break;
        case 3:
            sum_insurance_perHa = 132000;
            break;
        default:
            printf("INVALID CROP CODE");
            return 0;    
    }
    if(loss_percent <= 33.0){
        printf("NOT PAYABLE: LOSS 33 PERCENT OR BELOW");
        return 0;
    }
    double loss_fraction = loss_percent/100.0;
    double area_at_full_rate = areaHa;
    double area_at_reduced_rate = 0.0;
    if(areaHa > 4.0){
        area_at_full_rate = 4.0;
        area_at_reduced_rate = areaHa - 4.0;
    }
    double payout = sum_insurance_perHa * area_at_full_rate * loss_fraction + sum_insurance_perHa * area_at_reduced_rate * 0.75 * loss_fraction;
    if(notified_on_time == 0){
        payout = payout * 0.60;
    }
    if(payout < 1000.0){
        printf("BELOW THRESHOLD\n");
        return 0;
    }
    printf("Payout (Rs.): %.2f",payout);
    return 0;
}