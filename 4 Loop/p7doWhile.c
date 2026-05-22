//do while loop
#include<stdio.h>

int main(){
    /*  
        //for loop
        for(initilization; conditon; inc/dec){
            ...code;
        }

        //while loop
        initiliazation;
        while(codition){
            ...code;

            inc/dec;
        }

        //do-while loop
        initialization
        do{
            ...code

            inc/dec;
        }while(condition);
    */

    //print 1 to 10
    int x = 1;
    do{
        printf("%d ", x);
        x++;
    }while(x<=10);
    printf("\n");
    return 0;
}