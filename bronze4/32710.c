#include <stdio.h>

int main(void)
{
    int N;
    int visited[101] = { 0 }; // 0~100까지 전부 0으로 초기화

    scanf("%d", &N);

    for (int i = 1; i < 10; i++) 
    {
        visited[i] = 1;
        for (int j = 1; j < 10; j++) 
        {
            visited[i * j] = 1;
        }
    }

    if (visited[N])
        printf("1");
    else
        printf("0");

    return 0;
}
