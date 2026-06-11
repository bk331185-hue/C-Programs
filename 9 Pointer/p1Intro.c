#include<stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    printf("%d  %p\n", a, p);
    // printf("%p\n", &a);
    return 0;
}