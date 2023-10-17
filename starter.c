#include <stdio.h>

int main(){
    int temp;

    printf("What is the temperature? ");
    scanf("%d", &temp);

    if(temp < 10){
        printf("Put a coat on.");
    }
    else{
        printf("You dont need a coat.");
    }
    return 0;
}