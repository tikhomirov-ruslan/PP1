#include <iostream>
using namespace std;
int main() {
    int y;
    cin >> y;
    if (y < 2013) {
        cout << 2013;
    }
    else {
        cout << y + 1;
    }
}