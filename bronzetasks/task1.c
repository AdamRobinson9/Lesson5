#include <stdio.h>

int main(){
    int number;

    printf("What is your number? ");
    scanf("%d", &number);

    if(number == 0){
        printf("The number is zero.\n");
    }
    else if (number < 0){
        printf("The number is negative.\n");
    }
    else{
        printf ("The number is positive.\n");
    }
}