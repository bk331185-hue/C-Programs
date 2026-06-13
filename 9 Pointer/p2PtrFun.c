#include<stdio.h>
void fun(int *ptr){
    *ptr -= 10;// x = x + 10;
    printf("The value of ptr is %d\n", *ptr);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The Value of n is %d\n", n);
    fun(&n);  //passing by reference
    printf("The Value of n is %d\n", n);
    return 0;
}