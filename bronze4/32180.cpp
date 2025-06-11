#include <iostream>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int minimumMice = a + b + c + d - std::min({a, b, c, d}) + 1;
    std::cout << minimumMice << "\n";

    return 0;
}