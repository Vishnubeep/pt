#include <stdio.h>
int main(){
    int no_axle, rate_per_axle;
    int data = scanf("%d %d", &no_axle, &rate_per_axle);
    (void) data;
    int single_toll = no_axle * rate_per_axle;
    double pass = 1.5 * single_toll;
    int two_single_tolls = 2 * single_toll;
    double saving = pass - single_toll;
    printf("Single toll (Rs.): %d\n",single_toll);
    printf("Return pass (Rs.): %.2f\n",pass);
    printf("Saving vs two singles (Rs.): %.2f",saving);
    return 0;
}