#include <stdio.h>

int main(void)
{
    int S = 0, F = 0;
    scanf("%d%d", &S, &F);  // 따옴표와 & 기호 위치 수정

    S <= F ? printf("high speed rail") : printf("flight");

    return 0;
}
