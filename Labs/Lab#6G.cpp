#include <bits/stdc++.h>
using namespace std;
string remove_consonants(string s) {
    string new_string = "";
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == 'a' ||
            c == 'e' ||
            c == 'i' ||
            c == 'o' ||
            c == 'u' ||
            c == 'A' ||
            c == 'E' ||
            c == 'I' ||
            c == 'O' ||
            c == 'U') {
                continue;
                }
    new_string += c;
    }
    return new_string;
}
int main() {
    string s;
    getline(cin, s);
    cout << remove_consonants(s);
}
