#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("file.txt", "w");
    fprintf(fp, "Hello World!");
    fclose(fp);
    return 0;
}