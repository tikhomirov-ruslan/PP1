#include <iostream>
using namespace std;
int main() {
    int n, h, m;
    cin >> n;
    h = n / 60 / 60;
    m = n % 60;
    cout << h << " " << m;
}