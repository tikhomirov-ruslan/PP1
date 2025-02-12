#include <bits/stdc++.h>
using namespace std;
bool isValidString(string s, int n) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c >= '0' && c <= '9') cnt++;
    }
    return cnt >= n;
}
int main() {
    int n;
    string s;
    cin >> s >> n;
    if (isValidString(s, n)) {
        cout << "YES";
    } 
    else {
        cout << "NO";
    }
}