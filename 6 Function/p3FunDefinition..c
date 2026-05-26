#include<stdio.h>
//function declaration and definition
int sum(int a, int b){
    return (a+b);
}

int main(){
    int a, b;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    int res = sum(a, b);
    printf("The sum is %d\n", res);
    return 0;
}