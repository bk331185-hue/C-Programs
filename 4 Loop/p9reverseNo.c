// Reverse a number using a loop.

#include<stdio.h>

int main(){
    int n, m, lastDigit, revNum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    m = n;

    while(n != 0){
        lastDigit = n%10;
        revNum = (revNum * 10) + lastDigit;
        n /= 10;
    }
    printf("The reverse number of %d is %d\n", m, revNum);
    return 0;

}