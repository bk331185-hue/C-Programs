#include<stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // &arr[0]: ptr points to the first element of the array
    *ptr += 2;
    ptr++; // Move the pointer to the next element (20) 
    printf("Value at ptr: %d\n", *ptr); 
    ptr--;
    printf("Value at ptr: %d\n", *ptr);
    return 0;
}