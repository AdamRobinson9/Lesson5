#include <stdio.h>

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number % 4 == 0 && number % 5 == 0){
        printf("This number is divisible by both 4 and 5.\n");
    }
    else{
        printf("This number is not divisible by both 4 and 5.\n");
    }
    return 0;
}