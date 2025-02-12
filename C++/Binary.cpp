#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    string b;
    int n;
    cin >> n;
    int a[n];
    while (n != 0) {
        int i = 0;
        if (n % 2 == 0) {
            s += '0';
        }
        else {
            s += '1';
        }
        n /= 2;
        i++;
    }
    reverse (s.begin(), s.end());
    cout << s;
}