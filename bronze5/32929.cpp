#include <stdio.h>

int main(void) 
{

    char UOS[3] = {'U', 'O', 'S'};

    int x;



    scanf("%d", &x);



    x = x % 3;//2였다면 쉬프트 가능한데...아까비

    printf("%c\n", UOS[x - 1]);



    return 0;

}