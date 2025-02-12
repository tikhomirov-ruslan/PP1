#include <iostream>
using namespace std;
int main() {
    int m, n, k;
    cin >> m >> n >> k;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int cnt = 0, c = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(a[i][j] == k) cnt++;        
        }
        if(cnt > 0) c++;
        cnt = 0;
    }
    cout << c;
}