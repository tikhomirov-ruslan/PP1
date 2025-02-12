#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c;
    d = ((a + b) * 0.1);
    if(d >= c)
    cout << "You are my sweet baby";
    if(d < c)
    cout << "Boris, you are punished!";
}