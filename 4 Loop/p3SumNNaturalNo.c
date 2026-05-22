// Find the sum of first n natural numbers.

#include<stdio.h>

int main(){
    int n, sum = 0;
    printf("Kaha tk sum chahiye\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum += i; //sum = sum + i
    }
    printf("The sum of %d natural is %d\n", n, sum);
    return 0;
}

