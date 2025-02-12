#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    int n;
    cin >> a >> b >> c >> d;
    n = a * 10 + b * 25 + c * 5;
    cout << d + (n / 100) << " " << n % 100;
}