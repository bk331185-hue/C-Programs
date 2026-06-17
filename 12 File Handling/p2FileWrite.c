#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("brij.txt", "w");
    fprintf(fp, "I am brijesh and I am a CSE student.");
    fclose(fp);
    return 0;
}