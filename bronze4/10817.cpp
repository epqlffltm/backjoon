#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int median[3];
    for (int i = 0; i < 3; i++) {
        cin >> median[i];
    }

    sort(median, median + 3);
    cout << median[1] << endl;
    return 0;
}
