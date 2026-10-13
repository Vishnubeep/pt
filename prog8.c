#include <stdio.h>
int main(){
    double rainfall, humidity, ripeness;
    int workers;
    if(scanf("%lf %lf %lf %d", &rainfall, &humidity, &ripeness, &workers)!=4){
        return 1;
    }
    if(rainfall >= 5){
        printf("BLOCKED\nReason: RAIN\n");
    }
    else if(workers<20){
        printf("BLOCKED\nReason: LABOUR\n");
    }
    else if(ripeness<70){
        printf("BLOCKED\nReason: RIPENESS\n");
    }
    else if(humidity>=85){
        printf("BLOCKED\nReason: HUMIDITY\n");
    }
    else{
        printf("PICK\nEstimated Yield (kg): %d", workers*55);
    }

    return 0;
}