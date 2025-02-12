#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (max(a, b) > max(c, d)) {
        cout << max(a, b);
    }
    else {
        cout << max(c, d);
    }
}