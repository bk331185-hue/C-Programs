#include<stdio.h>

void prime(int x){
    int flag = 0;
    for(int i=2; i*i<=x; i++){
        if((x%i) == 0){
            flag = 1;
            break;
        }        
    }
    if(flag) printf("%d is not a prime number\n", x);
    else printf("%d is a prime number\n", x);    
}

int main(){
    int a;
    printf("Enter a number to check prime or not\n");
    scanf("%d", &a);
    prime(a);
    return 0;   
}
