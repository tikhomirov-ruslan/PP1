#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    s[s.size() - 1] = 'S';
    s[0] = 'A';
    cout << s;
}