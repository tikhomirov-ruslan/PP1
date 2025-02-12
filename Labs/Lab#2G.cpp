#include <iostream>
using namespace std;
int main() {
    int n, max = -1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        if (x > max) {
            max = x;
        }
    }
    cout << max; 
}