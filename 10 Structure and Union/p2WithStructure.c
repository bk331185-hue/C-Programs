#include <stdio.h>
#include <string.h>

struct student {
    char name[25]; 
    int age; 
    float marks; 
};

int main() {
    struct student s1, s2;

    strcpy(s1.name, "Muzahid");
    s1.age = 18;
    s1.marks = 99.9;

    strcpy(s2.name, "Brijesh");
    s2.age = 24;
    s2.marks = 99.9;

    printf("Name of first student: %s\n", s1.name);
    printf("Age of first student: %d\n", s1.age);
    printf("Marks of first student: %.1f\n", s1.marks);

    printf("\nName of second student: %s\n", s2.name);
    printf("Age of second student: %d\n", s2.age);
    printf("Marks of second student: %.1f\n", s2.marks);

    return 0;
}