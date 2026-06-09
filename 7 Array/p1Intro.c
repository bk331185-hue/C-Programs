#include<stdio.h>
int main(){
    //without array
    // int n1, n2, n3, n4, n5;
    // printf("Enter 5 numbers: \n");
    // scanf("%d", &n1);
    // scanf("%d", &n2);
    // scanf("%d", &n3);
    // scanf("%d", &n4);
    // scanf("%d", &n5);
    // printf("The first no. %d\n", n1);
    // printf("The second no. %d\n", n2);
    // printf("The third no. %d\n", n3);
    // printf("The fourth no. %d\n", n4);
    // printf("The fifth no. %d\n", n5);

    //with array
    int arr[5]; //n[0], n[1], n[2], n[3], n[4]
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Enter five numbers\n");
    for(int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }
    printf("The five numbers\n");
    for(int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}