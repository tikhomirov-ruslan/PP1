#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        bool cnt = false;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0)
            cnt = true;
            }
            if (cnt == false)
            cout << i << " " << "is prime" << '\n' ;
            }
            return 0;
            }