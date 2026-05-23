#include <stdio.h>
#include <unistd.h>

int main() {
    int n = 50;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            usleep(3000);    // 3 microseconds
            printf("* ");
            fflush(stdout);
        }
        printf("\n");
    }

    return 0;
}