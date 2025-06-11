#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char s[] = "SciComLove";
    scanf("%d", &N);

    if (N % 2 == 0)
        printf("%s\n", s);
    else {
        for (int i = strlen(s) - 1; i >= 0; --i)
            putchar(s[i]);
        putchar('\n');
    }

    return 0;
}
