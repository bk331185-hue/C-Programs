#include<stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    //without pointer   
    for(int i=0; i<7; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i=0; i<7; i++){
        printf("%d ", i[arr]);
    }
    printf("\n");

    //with pointer
    int *ptr = arr; //&arr[0]
    for(int i=0; i<7; i++){
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    for(int i=0; i<7; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n");
    for(int i=0; i<7; i++){
        printf("%d ", i[ptr]);
    }
    printf("\n");
    

    return 0;


}