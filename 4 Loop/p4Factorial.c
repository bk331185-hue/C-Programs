// Find the factorial of a number using a loop.

#include<stdio.h>

int main(){
    int n, factorial = 1;
    printf("Kiska factorial chahiye\n");
    scanf("%d", &n);
    // for(int i=n; i>=1; i--){
    //     factorial *= i;
    // }
    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    printf("The factorial of %d is %d\n", n, factorial);
    return 0;
}