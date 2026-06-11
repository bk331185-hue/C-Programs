#include<stdio.h>
#include<string.h>
int main(){
    //to find the length of string: strlen()
    char str1[] = "Brijesh Kumar";
    int l = strlen(str1);
    printf("The length of %s is %d\n", str1, l);

    //to copy a string to another string: strcpy(dest, src)
    char str2[20] = "Vishal";
    char str3[20] = "Muzahid";
    // strcpy(str2, str3);
    printf("%s   %s\n", str2, str3);

    //Copies up to n characters: strncpy(dest, src, n)
    strncpy(str2, str3, 2);
    printf("%s   %s\n", str2, str3);

    //Concatenates (joins) two strings: strcat(dest, src)
    char str4[] = "Beauti";
    char str5[] = "ful";
    strcat(str4, str5);
    printf("%s \n", str4);

    //Appends up to n characters: strncat(dest, src, n)
    char str6[] = "Brijesh";
    char str7[] = "Vicky";
    strncat(str6, str7, 3);
    printf("%s \n", str6);

    //Compares two strings: strcmp(s1, s2)
    char str8[] = "Vicky";
    char str9[] = "Brijesh";
    int n = strcmp(str8, str9);
    printf("%d\n", n);
    
    return 0;
}