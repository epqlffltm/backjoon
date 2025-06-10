#include <iostream>

int main(void)
{
    int n = 0;
    std::cin >> n;
    std::cout << ((n <= 100000 && n % 2024 == 0) ? "Yes" : "No");
    return 0;
}
