#include<stdio.h>
int sum(int x, int y){
    return x+y;
}
int main(){
    int a = 10;
    int b = 20;

    int (*fp)(int, int);
    fp = sum;

    int res1 = sum(a, b);
    int res2 = fp(a, b);
    int res3 = (*fp)(a, b);

    printf("The sum is %d\n",res1);
    printf("The sum is %d\n",res2);
    printf("The sum is %d\n",res3);
    return 0;
}