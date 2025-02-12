#include <iostream>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x % 2 != 0) {
            cout << x << " ";
        }
    }
}