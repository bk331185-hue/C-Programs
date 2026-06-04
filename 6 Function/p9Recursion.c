#include<stdio.h>
//without recursion
// int fact(int x){
//     int f = 1;
//     for(int i=1; i<=x; i++){
//         f *= i;
//     }
//     return f;
// }

//with recursion
int fact(int x){
    if(x == 0) return 1;
    else return x*fact(x-1);
}

int main(){
    int n, f;
    printf("Enter a number\n");
    scanf("%d", &n);
    f = fact(n);
    printf("The factorial of %d is %d\n", n, f); 
    return 0;
}