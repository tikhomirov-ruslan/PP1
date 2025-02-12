#include <iostream>
using namespace std;
int main() {
    long n, k, m;
    cin >> n;
    k = 0;
    long massiv[n];
    for (int m = 0; m < n; m++) {
        cin >> massiv[m];
        k = k + massiv[m];
    }
    cout << k;
    return 0;
}