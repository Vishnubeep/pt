#include <stdio.h>
int main(){
    int drilled_depth;
    scanf("%d",&drilled_depth);
    int slab_1feet = drilled_depth * (drilled_depth <300) + 300 * (drilled_depth >= 300);
    int beyond300 = drilled_depth - 300;
    beyond300 = beyond300 * (beyond300 > 0);
    int slab_2feet = beyond300 * (beyond300 < 200) + 200 * (beyond300 >= 200);
    int slab_3feet = (drilled_depth - 500) * (drilled_depth > 500); 

    int casing_feet = drilled_depth * (drilled_depth<60) + 60 * (drilled_depth >= 60);
    int drilling_charge = 75 * slab_1feet + 95 * slab_2feet + 130 * slab_3feet;
    int casing_charge = 400 * casing_feet;
    int total = drilling_charge + casing_charge;

    printf("Drilling charge (Rs.): %d\n",drilling_charge);
    printf("Casing charge (Rs.): %d\n",casing_charge);
    printf("Total (Rs.): %d\n", total);
    return 0;
}