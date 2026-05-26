#include<stdio.h>
int mulBy10(int); //function declaration

void main(){
    int result = mulBy10(45);
    printf("%d\n", result);
}


//fuction Definition
int mulBy10(int a){
    return a*10;
}