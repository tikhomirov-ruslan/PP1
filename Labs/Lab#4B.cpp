#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    int a, b, c, d = 0;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    a = arr[0][0];
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] >= a) {
                a = arr[i][j];
            }
        }
    }
    b = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] >= b && arr[i][j] < a) {
                b = arr[i][j];
            }
        }
    }
    c = arr[0][0];
       for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (c == arr[i][j]) {
                c = arr[i][j];
                d++;
            }
        }
    }
    if (d == n * n) {
        cout << 0;
    }
    else {
        cout << b;
    }
}