#include <stdio.h>
int main(){
    int no_days, meal_planc, guest_meal_count;
    if(scanf("%d %d %d",&no_days, &meal_planc,  &guest_meal_count)!=3){
        return 1;
    }
    if(no_days == 0){
        printf("NO CHARGE");
        return 0;
    }
    int rate_per_day;
    switch(meal_planc){
        case 1:
            rate_per_day = 110;
            break;
        case 2:
            rate_per_day = 145;
            break;
        case 3:
            rate_per_day = 170;
            break;
        default:
            printf("INVALID PLAN");
            return 0;       
    }
    double base_amount = no_days * rate_per_day;
    double rebate = 0.0;
    if(no_days >= 25){
        rebate = base_amount * 0.05;
    }
    double guest_total = guest_meal_count * 90.0;
    double net_amount = base_amount - rebate + guest_total;
    printf("Base (Rs.): %d\n", base_amount);
    printf("Rebate (Rs.): %.2f\n", rebate);
    printf("Guest total (Rs.): %.2f\n", guest_total);
    printf("Net (Rs.): %.2f\n",net_amount);
    return 0;
}