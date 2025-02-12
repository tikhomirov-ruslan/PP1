#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long x, n;
    cin >> n;
    x = 1;
    cout << 1 << endl;
    while (n > 0)
    {
        x *= 2;
        n--;
        cout << x << endl;
        }
}