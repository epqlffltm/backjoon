#include <stdio.h>

int main(void) 
{
    int test;
    scanf("%d", &test);

    int a[3][test];

    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < test; j++) 
            scanf("%d", &a[i][j]);

    int judge = 1; // 초기에는 모든 행이 7을 포함한다고 가정

    for (int i = 0; i < 3; i++) 
    {
        int found = 0;
        for (int j = 0; j < test; j++) 
            found |= (a[i][j] == 7); // 하나라도 7이면 found가 1이 됨

        judge &= found; // 모든 행이 7을 포함해야 judge가 1 유지됨
    }

    printf("%d\n", judge ? 777 : 0);

    return 0;
}
