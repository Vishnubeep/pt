#include <stdio.h>
int main(){
    int note_remaining;
    if(scanf("%d",&note_remaining)!=1) return 1;

    long total_dispensed = 0;
    int request;
    while(scanf("%d",&request) == 1 && request != 0){
        if(request % 500 != 0){
            printf("NOT A MULTIPLE OF 500\n");
            continue;
        }
        int notes_needed = request/500;
        if(notes_needed > note_remaining){
            printf("CASSEETTE EMPTY\n");
            break;
        }
        note_remaining -= notes_needed;
        total_dispensed += request;
        printf("SERVED %d\n", notes_needed);
    }
    printf("Total Dispensed (Rs.): %ld", total_dispensed);
    return 0;
}