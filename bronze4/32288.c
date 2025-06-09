#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0;
    char* pstr;

    scanf("%d", &n);

    pstr = (char*)malloc(n + 1); // 널문자 고려
    if (pstr == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    scanf("%s", pstr); // 문자열 입력, 자동으로 널문자 포함됨

    for (int i = 0; i < n; i++)
    {
        printf("%c", *(pstr+i) == 'I' ? 'i' : 'L');
        //printf("%c", pstr[i] == 'I' ? 'i' : 'L'); 동일 표현
    }

    free(pstr);

    return 0;
}