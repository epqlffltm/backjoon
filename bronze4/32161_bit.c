#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // add(b, a)
    int x = b, y = a;
    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    b = x;

    // multiply(b, a)
    x = b; 
    y = a;
    int result = 0;
    while (y != 0) {
        if (y & 1) {
            // add(result, x)
            int p = result, q = x;
            while (q != 0) {
                int carry = p & q;
                p = p ^ q;
                q = carry << 1;
            }
            result = p;
        }
        x <<= 1;
        y >>= 1;
    }
    b = result;

    // add(b, a)
    x = b;
    y = a;
    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    b = x;

    // multiply(b, a)
    x = b; 
    y = a;
    result = 0;
    while (y != 0) {
        if (y & 1) {
            // add(result, x)
            int p = result, q = x;
            while (q != 0) {
                int carry = p & q;
                p = p ^ q;
                q = carry << 1;
            }
            result = p;
        }
        x <<= 1;
        y >>= 1;
    }
    b = result;

    printf("%d\n", b);

    return 0;
}
