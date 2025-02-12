#include <iostream>
using namespace std;
int main() {
    int n, m; 
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x; 
            cin >> x;
            a[i]+=x;
        }
    }
    int min = a[0], pos = 0;
    for (int i = 0; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
            pos = i + 1;
        }
    }
    cout << pos;
}