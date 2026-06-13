#include<stdio.h>
int main(){
    int x = 10;
    int *p = &x;
    int **dp = &p;
    printf("%d \n", x);
    printf("%d \n", *p);
    printf("%d \n", **dp);    
    return 0;
}   
