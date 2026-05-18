// Write a program to check whether a number is even or odd.
#include<stdio.h>

int main(){
    int num = 44;

    if(num%2 == 0){
        printf("%d is a even number\n", num);
    }
    else{
        printf("%d is a odd number\n", num);
    }
    return 0;
}