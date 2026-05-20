#include<stdio.h>
int main(){
    int i, a = 5, b = 3;
    printf("1. Addition\n2. Subtraction\n3. Multiplicatoin\n4. Division\nChoose a number\n");
    scanf("%d", &i);
    switch(i){
        case 1: printf("The sum is: %d\n", a+b);
        break;
        case 2: printf("The difference is: %d\n", a-b);
        break;
        case 3: printf("The product is: %d\n", a*b);
        break;
        case 4: printf("The quotient is: %d\n", a/b);
        break;
        default: printf("You are chooose wrong number\n");
        break;

    }
    return 0;
}
