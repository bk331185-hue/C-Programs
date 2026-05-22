// Print the multiplication table of a given number.
#include<stdio.h>

int main(){
    int n;
    printf("Jiska table chahiye vh number enter kro\n");
    scanf("%d", &n);
    
    printf("The table of %d\n", n);
    for(int i=1; i<=10; i++){
        printf("%d \n", n*i);
    }
    
    return 0;
}