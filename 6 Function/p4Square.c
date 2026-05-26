#include<stdio.h>
int square(int a){
    return a*a;
} 
int main(){
    int n = 5, res;
    res = square(n);
    printf("The square of %d is %d\n", n, res);
    return 0;
}