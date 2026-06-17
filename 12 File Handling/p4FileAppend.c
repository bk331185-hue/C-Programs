#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("brij.txt", "a");
    fprintf(fp, "\nMy friend also a CSE student.");
    fclose(fp);
    return 0;
}