#include <stdio.h>

int main() {
    int number = 10;
    float decimal = 5.5;
    double bigDecimal = 12345.6789;
    char letter = 'C';

    printf("Integer: %d\n", number);
    printf("Float: %.2f\n", decimal);
    printf("Double: %.4lf\n", bigDecimal);
    printf("Character: %c\n", letter);

    return 0;
}