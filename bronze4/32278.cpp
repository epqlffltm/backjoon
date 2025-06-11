#include <iostream>
#include <climits>

int main(void) 
{
    long long n;
    std::cin >> n;

    if (n >= SHRT_MIN && n <= SHRT_MAX) 
    {
        std::cout << "short\n";
    } 
    else if (n >= INT_MIN && n <= INT_MAX) 
    {
        std::cout << "int\n";
    } 
    else if (n >= LLONG_MIN && n <= LLONG_MAX) 
    {
        std::cout << "long long\n";
    } 
    else 
    {
        std::cout << "None\n";
    }

    return 0;
}
