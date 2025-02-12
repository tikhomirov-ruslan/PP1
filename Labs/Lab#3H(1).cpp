#include<iostream>
using namespace std;
int main() {
    long n, l, r;
    cin >> n >> l >> r;
    long a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long sum = 0;
    for(int i = l - 1; i < r; i++) {
        sum += a[i];
    }
    cout << sum;
    return 0;
}