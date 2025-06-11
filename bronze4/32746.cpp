#include <iostream>
#include <algorithm>
#include <string>

int main() {
    int N;
    std::cin >> N;

    std::string s = "SciComLove";
    if (N % 2 != 0)
        std::reverse(s.begin(), s.end());

    std::cout << s << '\n';
    return 0;
}
