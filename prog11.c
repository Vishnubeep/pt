#include <stdio.h>
int main(){
    int days;
    if(scanf("%d",&days)!=1) return 1;
    int total = 0;
    for(int i=0;i<days;i++){
        int eggs;
        scanf("%d",&eggs);
        total += eggs;
    }
    double avg = (double) total/days;
    int count = 0;
    for(int i=0;i<days;i++){
        int eggs;
        scanf("%d",&eggs);
        if(eggs > avg) count++;
    }
    printf("Total eggs: %d\n", total);
    printf("Average: %.2f\n", avg);
    printf("Days above average: %d\n", count);
    return 0;
}