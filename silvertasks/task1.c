#include <stdio.h>

int main(){
    int mark;

    printf("What was your mark? ");
    scanf("%d", &mark);

    if(mark > 100 || mark < 0){
        printf("Not a valid mark.\n");
    }
    else if(mark >= 70){
        printf("You passed with distinction.\n");
    }
    else if(mark >= 40){
        printf("You passed.\n");
    }
    else{
        printf("You failed\n");
    }
}