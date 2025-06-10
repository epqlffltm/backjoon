#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void onion(int* poa, int* pob, int* pa, int* pb);

int main(void)
{
    int n = 0, a = 0, b = 0, oa = 1, ob = 1;

    scanf("%d %d %d", &n, &a, &b);  // 콤마 수정

    for (int i = 0; i < n; i++)
    {
        onion(&oa, &ob, &a, &b);
    }

    printf("%d %d\n", oa, ob);  // 결과 출력

    return 0;
}

void onion(int* poa, int* pob, int* pa, int* pb)
{
    *poa += *pa;
    *pob += *pb;

    if (*poa == *pob) 
    {
        --*pob;
    }
    else if (*poa < *pob) 
    {
        *poa ^= *pob;
        *pob ^= *poa;
        *poa ^= *pob;
    }

}