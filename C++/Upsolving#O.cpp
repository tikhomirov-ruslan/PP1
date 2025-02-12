#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int x[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
        x[i]=0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            x[i] = x[i] + a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        x[i] = x[i] / m;
        cout << x[i] << " ";
    }
}