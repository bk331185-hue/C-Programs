#include <stdio.h>
#include <string.h>

union student {
    char name[25];
    int age; 
    float marks; 
};

int main() {
    union student s1, s2;
    
    strcpy(s1.name, "Muzahid");
    printf("Name of first student: %s\n", s1.name);
    s1.age = 18;
    printf("Age of first student: %d\n", s1.age);  
    s1.marks = 99.9;     
    printf("Marks of first student: %.1f\n", s1.marks);

    strcpy(s2.name, "Brijesh");
    printf("\nName of second student: %s\n", s2.name);
    s2.age = 24;
    printf("Age of second student: %d\n", s2.age);
    s2.marks = 99.9;
    printf("Marks of second student: %.1f\n", s2.marks);
    
    

    return 0;
}