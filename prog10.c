#include <stdio.h>
int main(){
    int donor, recipient;
    if(scanf("%d %d",&donor,&recipient)!=2){
        return 1;
    }
    if(donor < 1 || donor > 8 || recipient < 1 || recipient > 8){
        printf("INVALID GROUP CODE");
        return 0;
    }
    int compatible = 0;
    switch(recipient){
        case 1:
            compatible = (donor == 1);
            break;
        case 2:
            compatible = (donor == 1 || donor == 2);
            break;    
        case 3:
            compatible = (donor == 1 || donor == 3);
            break;
        case 4:
            compatible = (donor == 1 || donor == 2 || donor == 3 || donor == 4);
            break;
        case 5:
            compatible = (donor == 1 || donor == 5);
            break;
        case 6:
            compatible = (donor == 1 || donor == 2 || donor == 5 || donor == 6);
            break;
        case 7:
            compatible = (donor = 1 || donor == 3 || donor == 5 || donor == 7);
            break;
        default :
            compatible = 1;
            break;            
    }
    if(compatible){
        printf("COMPATIBLE\n");
    }
    else{
        printf("INCOMPATIBLE\n");
    }
    if(donor == 1){
        printf("UNIVERSAL DONOR\n");
    }
    if(recipient == 8){
        printf("UNIVERSAL RECIPIENT\n");
    }
    return 0;
}