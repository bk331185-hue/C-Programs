#include<stdio.h>
int main(){
    int arr[] = {23, 4, 56, 7, 89, 0, 34};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i=0; i<len; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("The max value is %d\n", max);
    return 0;
}