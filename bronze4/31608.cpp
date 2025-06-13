#include <iostream>
#include <string>

int main(void) 
{
    int n = 0;
    std::cin >> n;

    std::string a, b;
    std::cin >> a >> b;

    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] != b[i]) count++;
    }

    std::cout << count;
    
    return 0;
}