#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    int c, n;
    cin >> s;
    c = 0;
    n = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            c = c + s[i];
        }
        else {
            n = n + s[i];
        }
    }
    if (n == c) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
}