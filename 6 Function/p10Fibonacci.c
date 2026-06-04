#include<stdio.h>
//without recursion
// void fib(int x){
//     int a = 0, b = 1, c; 
//     printf("%d %d", a, b);
//     for(int i=1; i<=x-2; i++){
//         c = a+b;
//         printf(" %d", c);
//         a = b;
//         b = c;
//     }
//     printf("\n");
// }

//with recusion
int fib(int x){
    if(x == 0) return 0;
    if(x == 1) return 1;
    return fib(x-1) + fib(x-2);
}

int main(){
    int n;
    printf("Kaha tk print kroge fibonacci series\n");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}