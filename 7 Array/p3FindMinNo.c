#include<stdio.h>
int main(){
    int arr[] = {4, 5, 7, 8, 90, 3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    for(int i=0; i<len; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("The min value is %d\n", min);
    return 0;
}