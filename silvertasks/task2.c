#include <stdio.h>

int main(){
    int temp;

    printf("What is the temperature? ");
    scanf("%d", &temp);

    if (temp < -10 || temp > 40){
        printf("Not in valid range.\n");
    }
    else (printf("In the valid range.\n"));
    return 0;
}