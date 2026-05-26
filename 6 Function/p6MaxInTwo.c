#include<stdio.h>
int max(int x, int y){
    if(x > y) return x;
    else return y;
}

int main(){
    int a = 235, b = 23, ans;
    ans = max(a, b);
    printf("The maximum value is %d\n", ans);
    return 0;
}