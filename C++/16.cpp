#include <iostream>
using namespace std;
int main() {
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    cout << ((x - a) * 3600 + (y - b) * 60 + z - c);
}