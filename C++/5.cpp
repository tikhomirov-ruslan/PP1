#include <iostream>
using namespace std;
int main() {
    int l = 109, v, t, S, k;
    cin >> v >> t;
    S = abs(v) * t;
    k = S % l;
    if (k == 0)
        cout << 0 << endl;
    else
    {
        if (v < 0)
            cout << l - k << endl;
        else if (v > 0)
            cout << k << endl;
    }
}