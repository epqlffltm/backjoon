#include <iostream>
#include <algorithm>
#include <cstdlib>

int main() {
    std::string A, B;
    std::cin >> A >> B;

    int n = abs(A[0] - B[0]);
    int m = abs(A[1] - B[1]);

    std::cout << std::min(n, m) << ' ' << std::max(n, m) << '\n';

    return 0;
}
