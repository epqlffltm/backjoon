#include <stdio.h>

int add(int x, int y) {
    while (y) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int multiply(int x, int y) {
    int result = 0;
    while (y) {
        if (y & 1) result = add(result, x);
        x <<= 1;
        y >>= 1;
    }
    return result;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    b = multiply(add(multiply(add(b, a), a), a), a);

    printf("%d\n", b);
    return 0;
}
