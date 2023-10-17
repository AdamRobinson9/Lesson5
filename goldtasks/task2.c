#include <stdio.h>

int main(){
    int choice = 0;

    while (choice != -1){
        printf("Make a choice\n");
        scanf("%d", &choice);
        if (choice == -1){
            printf("Termination value.");
        }
        else if (choice < 0 || choice > 100){
            printf("Not in the range.\n");
        }
        else {
            printf("Number in range.\n");
        }
    }
    
}