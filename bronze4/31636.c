#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
    int N;
    scanf("%d", &N);
    char *s = (char *)malloc((N + 1) * sizeof(char));
    scanf("%s", s);

    if (strstr(s, "ooo") != NULL)
        printf("Yes\n");
    else
        printf("No\n");

    free(s);
    return 0;
}
