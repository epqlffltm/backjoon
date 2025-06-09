#include <stdio.h>
#include <limits.h>

int main(void) 
{
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n >= SHRT_MIN && n <= SHRT_MAX) 
    {
        printf("short\n");
    } else if (n >= INT_MIN && n <= INT_MAX) 
    {
        printf("int\n");
    } else if (n >= LLONG_MIN && n <= LLONG_MAX) 
    {
        printf("long long\n");
    } else 
    {
        printf("None\n");
    }

    return 0;
}
