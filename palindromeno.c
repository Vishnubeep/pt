#include <stdio.h>
int main(){
    int x;
    if(scanf("%d",&x)!=1) return 1;
    int digit;
    int temp = x;
    int res = 0;
    while(temp>0){
        digit = temp % 10;
        temp /= 10;
        res = res * 10 + digit;
    }
    (x==res) ? printf("True") : printf("False");
    return 0; 
}