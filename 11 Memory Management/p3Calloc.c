#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("How many element you want to store:\n");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    printf("Enter %d numbers:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Your entered numbers are:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    char ch;
    printf("You want to enter more element:\n(Y/N): ");
    scanf(" %c", &ch);
    if(ch == 'Y'){
        printf("How many element you want to increase:\n");
        int e;
        scanf("%d", &e);
        int ns = n+e;
        arr = realloc(arr, ns*sizeof(int));
        printf("Enter next %d element:\n", e);
        for(int i=n; i<ns; i++){
            scanf("%d", &arr[i]);
        }
        printf("All %d entered numbers are:\n", ns);
        for(int i=0; i<ns; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    free(arr);
    return 0;

}
