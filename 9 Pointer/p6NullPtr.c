#include<stdio.h>
int main(){
    int *p = NULL;
    if(p == NULL){
        printf("The pointer is null\n");
    }
    int x = 10;
    p = &x;
    if(p != NULL){
        printf("The pointer is not null\n");
        printf("The value of x is %d\n", *p);
    }

    return 0;
}