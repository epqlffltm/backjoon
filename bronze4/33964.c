#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void)
{
	int x = 0, y = 0;

	scanf("%d %d", &x, &y);

	int xl = 1, yl = 1;

	for (int i = 0; i < x-1; i++)
	{
		xl = xl * 10 + 1;
	}

	for (int i = 0; i < y-1; i++)
	{
		yl = yl * 10 + 1;
	}

	printf("%d", xl + yl);

	return 0;
}