#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = sqrt(n);
    if (m * m != n) {
        cout << "Simple" << endl;
    }
    else {
        cout << "Perfecto" << endl;
    }
}