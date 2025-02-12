#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    cout << (m / n) + 1 % (m % n + 1);
}