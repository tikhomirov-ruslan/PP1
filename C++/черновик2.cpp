#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i < t.size(); i++) {
        if (t[i]) cnt++;
    }
    for (int i = 0; i < s.size(); i++) {
        if (s.substr(i, cnt) = t[i]) cout << "Yes";
        else cout << "No";
    }
}
