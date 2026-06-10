#include<stdio.h>
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int a[] = {2, 3, 5, 7, 9};
    int s = sizeof(a)/sizeof(a[0]);

    printArray(a, s);

    return 0;
}