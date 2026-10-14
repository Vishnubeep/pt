#include <stdio.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1) return 1;
    int tray_number = 1;
    for(int row = 1;row<=n; row++){
        for(int space = 0; space<n-row; space++){
            printf("_");
        }
        for(int col=1;col<=row;col++){
            if(col>1) printf(" ");
            printf("%d",tray_number);
            tray_number++;
        }
        printf("\n");
    }
    printf("Total trays: %d", tray_number);
    return 0;
}