#include <iostream>
#include <string>

int main(void)
{
    int n = 0;
    std::string str;

    std::cin >> n;
    std::cin >> str;

    for (int i = 0; i < n; i++)
    {
        str[i] = (str[i] == 'I') ? 'i' : 'L';
    }

    std::cout << str << std::endl;

    return 0;
}
