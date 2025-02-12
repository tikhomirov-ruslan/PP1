#include <iostream>
using namespace std;
int main() {
    int n, h = 0, m, s;
    cin >> n;
    s = n % 60;
    h = n / 3600;
    n -= h * 3600;
    h %= 24;
    m = n / 60 % 60;
    cout << h << ':';
    cout << (m < 10 ? "0" : "") << m << ':';
    cout << (s < 10 ? "0" : "") << s << std::endl;
    return 0;
}