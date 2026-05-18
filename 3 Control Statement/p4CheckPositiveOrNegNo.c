// Write a program that takes a number from the user and checks whether it is positive, negative, or zero.
#include<stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("%d is positive number\n", num);
    }
    if(num < 0){
        printf("%d is negative number\n", num);
    }
    if(num == 0){
        printf("This is zero\n");
    }

    return 0;
}