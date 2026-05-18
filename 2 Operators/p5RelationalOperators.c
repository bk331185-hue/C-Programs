#include<stdio.h>

int main(){
    //relational operators
    int a = 6, b = 6;

    if(a > b){
        printf("%d is greater than %d\n", a, b);
    }
    if(a < b){
        printf("%d is less than %d\n", a, b);
    }
    if(a == b){
        printf("%d is eqaul to  %d\n", a, b);
    }
    if(a != b){
        printf("%d is not eqaul to %d\n", a, b);
    }
    if(a >= b){
        printf("%d is greater than or equal to %d\n", a, b);
    }
    if(a <= b){
        printf("%d is less than or equal to %d\n", a, b);
    }

}