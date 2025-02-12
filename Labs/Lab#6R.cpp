#include <bits/stdc++.h>
using namespace std;
char toUpper(char a) { 
    if (a >= 'A' && a <= 'Z')
        return a;
    int x = a - 'a';
    return char (x + 'A');
}
int main () {
    char c;
    cin >> c;
    cout << toUpper(c);
}