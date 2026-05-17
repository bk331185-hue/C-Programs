#include <stdio.h>

int main() {
    int a = 10;

    // Simple assignment
    printf("Initial value: %d\n", a);

    // Add and assign
    a += 5;
    printf("After += : %d\n", a);

    // Subtract and assign
    a -= 3;
    printf("After -= : %d\n", a);

    // Multiply and assign
    a *= 2;
    printf("After *= : %d\n", a);

    // Divide and assign
    a /= 4;
    printf("After /= : %d\n", a);

    // Modulus and assign
    a %= 3;
    printf("After %%= : %d\n", a);

    return 0;
}