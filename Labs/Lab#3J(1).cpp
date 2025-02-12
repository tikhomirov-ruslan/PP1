#include <iostream>
using namespace std;
int main() {
    int n, target; 
    cin >> n >> target;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            pos = i + 1;
            break;
        } 
        else if (a[i] > target) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        cout << n;
    } 
    else {
        cout << pos;
    }
}