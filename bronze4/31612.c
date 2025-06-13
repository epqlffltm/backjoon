#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int N = 0;
    scanf("%d", &N);

    char *S = (char *)malloc((N + 1) * sizeof(char));
    scanf("%s", S);

    int sum = 0;
    for (int i = 0; i < N; i++) 
    {
        if (S[i] == 'j' || S[i] == 'i') 
        sum += 2;
        else if (S[i] == 'o') 
        sum += 1;
    }

    printf("%d\n", sum);

    free(S);
    return 0;
}
