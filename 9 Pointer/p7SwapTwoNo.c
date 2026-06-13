#include<stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

}
int main(){
    int a = 10, b = 20;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    swap(&a, &b);
    printf("After swapping:\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}