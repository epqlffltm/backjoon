#include <iostream>
#include<string>

int main(void) 
{
    int x, y;
    std::cin >> x >> y;
    std::cout << std::stoll(std::string(x, '1')) + std::stoll(std::string(y, '1'));

    return 0;
}
