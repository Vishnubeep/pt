//patterns

#include <stdio.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1) return 1;    for(int row=1;row<=n;row++){
        for(int space = 0; space < n-row; space++){
            printf("_");
        }
        for(int a=0;a<row;a++){
            printf(".");
        }
        printf("\n");
    }
    for(int row=1;row>=n;row++){
        for(int space = 0; space < n-row; space++){
            printf("_");
        }
        for(int a=0;a<row;a++){
            printf(".");
        }
        printf("\n");
    }
    return 0;
}