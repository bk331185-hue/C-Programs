#include<stdio.h>
void sum(int, int); //fuction declaration

int main(){
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    sum(a, b); //fuction call
    printf("Done\n");
    return 0;
}

//fuction definition
void sum(int x, int y){
    printf("Sum is: %d\n", x+y);
}


