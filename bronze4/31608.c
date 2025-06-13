#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    char *a = (char *)malloc((n + 1) * sizeof(char)); // +1 for null terminator
    char *b = (char *)malloc((n + 1) * sizeof(char));

    scanf("%s", a);
    scanf("%s", b);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])
            count++;
    }

    printf("%d\n", count);

    free(a);
    free(b);
    return 0;
}