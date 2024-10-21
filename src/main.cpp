#include <stdio.h>
#include "calculator.h"

int main() {
    int a = 10, b = 6;
    printf("Add: %d + %d = %d\n", a, b, add(a, b));
    printf("Subtract: %d - %d = %d\n", a, b, subtract(a, b));
    printf("Mul: %d - %d = %d\n", a, b, mul(a, b));
    return 0;
}
