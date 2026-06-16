#include<stdio.h>
#include<stdlib.h>
int main(){
    int n = 5;
    int *arr = (int *)malloc(n*sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter 5 numbers:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("ENTERED NO:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("You want to increase size:(If yes enter 1)\n");
    int x = 0;
    scanf("%d",&x); 
    if(x){
        int *temp = realloc(arr, 10 * sizeof(int));
        if (temp == NULL) {
            printf("Reallocation failed!\n");
            return 1;
        }
        arr = temp;
        printf("Enter next 5 numbers:\n");
        for(int i=5; i<10; i++){
            scanf("%d", &arr[i]);
        }
        printf("ENTERED NO:\n");
        for(int i=0; i<10; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    free(arr);
    return 0;

}