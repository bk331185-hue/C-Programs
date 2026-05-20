#include <stdio.h>

int  main(){
    int num = 35;
    if(num > 50){
        if(num%2 ==  0){
            printf("%d is greater than 50 and a even number\n", num);
        }
        else{
          printf("%d is greater than 50 and a odd number\n", num);  
        }
    }
    else{
        if(num%2 == 0){
            printf("%d is less than 50 and a even number\n", num);
        }
        else{
            printf("%d is less than 50 and a odd number\n", num);
        }
    }
    return 0;
}