#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0], a = 1, b = 1;
     for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
                a = i + 1;
                b = j + 1;
            }
        }
    }
    cout << a << " " << b;
}