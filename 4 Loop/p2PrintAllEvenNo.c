#include<stdio.h>
int main(){
    int n;
    printf("Kaha tk chahte ho ki even no print kre\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%2 == 0) printf("%d ", i);
    }
    return 0;
}