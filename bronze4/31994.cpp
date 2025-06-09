#include <iostream>
#include <cstdlib>

int main(void)
{
    std::string title;
    std::string max_title;
    int piple = 0;
    int max_piple = 0;

    for (int i = 0; i < 7; i++)
    {
        std::cin >> title >> piple;

        if (max_piple < piple) {
            max_piple = piple;
            max_title = title;
        }
    }

    std::cout << max_title;

    return 0;
}
