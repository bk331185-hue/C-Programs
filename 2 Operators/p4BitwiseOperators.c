#include <stdio.h>

int main() {

    int a = 5, b = 3;

    // Binary values
    // a = 5  -> 0101
    // b = 3  -> 0011

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    // Bitwise AND
    printf("Bitwise AND (&)        : %d\n", a & b);

    // Bitwise OR
    printf("Bitwise OR (|)         : %d\n", a | b);

    // Bitwise XOR
    printf("Bitwise XOR (^)        : %d\n", a ^ b);

    // Bitwise NOT
    printf("Bitwise NOT (~a)       : %d\n", ~a);

    // Left Shift
    printf("Left Shift (a << 1)    : %d\n", a << 1);

    // Right Shift
    printf("Right Shift (a >> 1)   : %d\n", a >> 1);

    return 0;
}