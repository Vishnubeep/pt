#include <stdio.h>
int main(){
    const int TRUCK_CAPACITY = 240;
    int trips = 0;
    int curr_load = 0;
    int consignment;
    while(scanf("%d",&consignment) && consignment != 0){
        if(consignment + curr_load > TRUCK_CAPACITY){
            trips++;
            curr_load = consignment;
        }else{
            curr_load += consignment;
        }
    }
    if(curr_load>0){
        trips++;
    }
    printf("Trips: %d\n", trips);
    printf("Bags on last trip: %d\n",curr_load);

    return 0;
}