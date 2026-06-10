#include<stdio.h>
int main(){
    // char ch = 'b';
    // printf("%c\n", ch);

    //character array
    char arr[] = {'h', 'e', 'l', 'l', 'o'};
    for(int i=0; i<5; i++){
        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;
}