#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if ((a % 3 == 0 || a % 5 == 0 || a % 7 == 0) && (b % 2 == 0)) {
        cout << "black";
    }
    else {
        cout << "white";
    }
}