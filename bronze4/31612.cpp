#include <iostream>
#include <vector>

int main(void) 
{
    int N = 0;
    std::cin >> N;

    std::vector<char> S(N);

    for (int i = 0; i < N; i++) 
    {
        std::cin >> S[i];
    }

    int sum = 0;
    for (char c : S) {
        if (c == 'j' || c == 'i') 
        sum += 2;
        else if (c == 'o') 
        sum += 1;
    }

    std::cout << sum << std::endl;

    return 0;
}
