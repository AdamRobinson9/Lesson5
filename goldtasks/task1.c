#include <stdio.h>

int main(){
    int choice;

    printf("Make a choice\n");
    scanf("%d", &choice);

    switch(choice-1){
        case 0: printf("Option 1 has been selected\n");
        break;
        case 1: printf("Option 2 has been selected\n");
        break;
        case 2: printf("Option 3 has been selected\n");
        break;
        case 3: printf("Option 4 has been selected\n");
        break;
        case 4: printf("Option 5 has been selected\n");
        break;
        default: printf("Invalid option selected\n");
    }
}