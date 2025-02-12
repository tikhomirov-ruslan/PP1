#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && a == c && c == b)
    cout << "NO" << endl;
    else if (a == b)
    cout << "YES" << endl;
    else if (b == c)
    cout << "YES" << endl;
    else if (c == a) 
    cout << "YES" << endl;
    else 
    cout << "NO" << endl;
}