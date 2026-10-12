#include <stdio.h>
int main(){
    double fat_percentage;
    scanf("%lf",&fat_percentage);
    if(fat_percentage<3.0){
        printf("Grade: Rejected");
    }
    else if(fat_percentage>=3.0 && fat_percentage<3.5){
        printf("Grade: C\nRate (Rs/litre): 33");
    }
    else if(fat_percentage>=3.5 && fat_percentage<=4.0){
        printf("Grade: B\nRate (Rs/litre): 38");
    }
    else if(fat_percentage>4.0){
        printf("Grade: A\nRate (Rs/litre): 42");
    }
    return 0;
}