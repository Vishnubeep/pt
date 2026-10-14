#include <stdio.h>
int main(){
    int serial;
    if(scanf("%d", &serial)!=1) return 1;
    int digit_count = 0;
    int temp = serial;
    if(temp==0) digit_count = 1;
    while(temp>0){
        digit_count++;
        temp /= 10;
    }
    int digit_sum = 0;
    long square_sum = 0;
    int alternate_sum = 0;
    temp = serial;
    for(int i=1;i<=digit_count;i++){
        int digit = temp % 10;
        temp = temp / 10;
        int position = digit_count - i + 1;
        digit_sum += digit;
        square_sum += (long)digit * digit;
        if(position % 2 == 1) alternate_sum += digit;
        else alternate_sum -= digit;
    }
    printf("Digits: %d", digit_count);
    printf("Digit Sum: %d", digit_sum);
    printf("Sum of squares: %d", square_sum);
    printf("Alternating sum: %d", alternate_sum);
    if(alternate_sum%11 == 0) printf("Valid");
    else printf("INVALID");
    return 0;
}