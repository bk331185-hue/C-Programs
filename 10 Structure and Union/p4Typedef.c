#include<stdio.h>
// typedef struct student{
//     char name[25];
//     int age;
//     float marks;
// }std;
typedef struct {
    char name[25];
    int age;
    float marks;
}std;
int main(){
    std s1, s2;
    s1.age = 18;
    printf("Age of first student is %d\n", s1.age);


    //typedef change name of anything
    typedef int i;
    i n = 10;
    printf("%d\n", n);
    return 0;

}
