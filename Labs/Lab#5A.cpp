#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    long long b = 0, c = 0;
    for (long long i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            b++;
        }
        else {
            c++;
        }
    }
    cout << c << " " << b;
}