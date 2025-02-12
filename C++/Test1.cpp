#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n >= 1000000 && n <= 9999999) {
        cout << "YES";
    }
        else {
            cout << "NO";
        }
}