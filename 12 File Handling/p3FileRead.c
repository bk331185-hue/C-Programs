#include<stdio.h>
int main(){
    FILE *fp;
    char str[100];
    fp = fopen("file.txt", "r");
    fscanf(fp, "%s", str);
    printf("%s\n", str);
    fclose(fp);
    return 0;
}