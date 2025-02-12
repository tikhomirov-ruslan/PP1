#include <iostream>
using namespace std;
int main() {
    int n, c = 1;
    cin >> n;
    while(c * c <= n) {
        cout << c * c << endl;
        c++;
    }
}