#include<stdio.h>
void EvenOdd(int n){
    if(n%2 == 0) printf("This is a even\n");
    else printf("This is a odd\n");
}

void main(){
    int n = 4;
    EvenOdd(n);
}