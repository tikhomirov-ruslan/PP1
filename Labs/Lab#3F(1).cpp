#include <iostream>
using namespace std;
int main() {
    int n, k, m;
    cin >> n;
    k = 0;
    int array[n];
    int a[n];
    for (int m = 0; m < n; m++) {
        cin >> array[m];
        a[(n - m) - 1] = array[m];
    }
    for (int x = 0; x < n; x++) {
    cout << a[x] << " ";
    }
}