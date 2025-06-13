#include <iostream>
#include <string>

int main(void) 
{
    int N = 0;
    std::cin >> N;
    std::string s;
    std::cin >> s;

    std::cout << (s.find("ooo") != std::string::npos ? "Yes" : "No") << std::endl;

    return 0;
}
