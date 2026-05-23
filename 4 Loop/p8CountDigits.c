// Count the number of digits in a number. 

#include<stdio.h>
int main(){
    int n, countDigits = 0, lastDigit;
    printf("Enter the number\n");
    scanf("%d",&n);

    while(n != 0){
        lastDigit = n%10;
        countDigits++;
        
        n = n/10;
    }
    printf("The number of digits is %d in %d\n", countDigits, n);
    return 0;
    
}


