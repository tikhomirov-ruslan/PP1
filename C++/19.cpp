#include <iostream>
using namespace std;
int main() {
    int h, a, b;
    cin >> h >> a >> b;
    cout << (h - 2 * b + a - 1) / (a - b);
}