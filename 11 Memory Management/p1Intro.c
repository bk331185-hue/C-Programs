#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter 5 numbers:\n");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    printf("ENTERED NUMBERS IS GIVEN BELOW:\n");
    for(int i=0; i<5; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");

    //Now I want to increare the size of array but in the arraye is not possible.
    //So, for this, we use malloc or calloc
    return 0;
}