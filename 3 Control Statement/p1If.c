#include <stdio.h>

int main(){
    int a = 4;

    if(a > 5){    
        printf("%d is greater than 5\n", a);
    }   

    if(a < 5){
        printf("%d is less than 5\n", a);
    }
    if(a == 5){
        printf("%d is equal to 5\n", a);
    }
    
    return 0;
}