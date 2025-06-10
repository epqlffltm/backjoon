#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    (n <= 100000 && n % 2024 == 0) ? printf("Yes") : printf("No");

    return 0;
}