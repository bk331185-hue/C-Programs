//take two 3x3 matrices by user and do addition
#include<stdio.h>
int main(){
    int m1[3][3], m2[3][3], m3[3][3];
    printf("Enter first 3x3 matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter second 3x3 matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &m2[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("The sum of both matrices is:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d  ", m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}