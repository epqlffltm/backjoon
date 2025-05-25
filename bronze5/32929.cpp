#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    n -= 1;
    int r = n % 3;
    char result;

    if (r == 0) result = 'U';
    else if (r == 1) result = 'O';
    else result = 'S';

    printf("%c\n", result);
    return 0;
}