#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    b = b + a;
    b = b * a;
    b = b + a;
    b = b * a;

    printf("%d\n", b);

    return 0;
}
