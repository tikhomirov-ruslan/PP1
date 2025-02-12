#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
        if (min > a[i]) {
            min = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (max == a[i]) {
            a[i] = min;
        }
        cout << a[i] << " ";
    }
}
// MaxToMin
// Input
//4
//1 4 14 6
//Output
//1 4 1 6 