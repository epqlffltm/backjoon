#include <iostream>
#include <vector>

int main(void) 
{
    int n = 0;
    std::cin >> n;

    std::vector<int> a(n);
    std::vector<int> check(10, 0);

    for (int i = 0; i < n; i++) 
    {
        std::cin >> a[i];
        if (a[i] >= 0 && a[i] <= 9)
            check[a[i]] = 1;
    }

    for (int i = 0; i < 10; i++) 
    {
        if (check[i] == 1)
            std::cout << i << std::endl;
    }

    return 0;
}