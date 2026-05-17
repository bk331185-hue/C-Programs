#include <stdio.h>

int main() {
    int a = 10, b;

    printf("Initial value of a: %d\n\n", a);

    // ---------------- POST-INCREMENT ----------------
    printf("===== POST-INCREMENT =====\n");

    a++;   // a = a + 1
    printf("After a++ : a = %d\n", a);

    // Value assigned first, then increment happens
    b = a++;
    printf("After b = a++\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n\n", b);

    // Reset value
    a = 10;

    // ---------------- PRE-INCREMENT ----------------
    printf("===== PRE-INCREMENT =====\n");

    ++a;   // a = a + 1
    printf("After ++a : a = %d\n", a);

    // Increment happens first, then value assigned
    b = ++a;
    printf("After b = ++a\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n\n", b);

    // Reset value
    a = 10;

    // ---------------- POST-DECREMENT ----------------
    printf("===== POST-DECREMENT =====\n");

    a--;   // a = a - 1
    printf("After a-- : a = %d\n", a);

    // Value assigned first, then decrement happens
    b = a--;
    printf("After b = a--\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n\n", b);

    // Reset value
    a = 10;

    // ---------------- PRE-DECREMENT ----------------
    printf("===== PRE-DECREMENT =====\n");

    --a;   // a = a - 1
    printf("After --a : a = %d\n", a);

    // Decrement happens first, then value assigned
    b = --a;
    printf("After b = --a\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);

    return 0;
}