#include<stdio.h>
int fact(int x){
    int f = 1;
    for(int i=1; i<=x; i++){
        f *= i;
    }
    return f;
}
int main(){
    int a, ans;

    printf("Enter a number for find the factorial that number\n");
    scanf("%d", &a);

    ans = fact(a);
    printf("The factorial of %d is %d\n", a, ans);
    return 0;
}
