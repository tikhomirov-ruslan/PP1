#include <iostream>
using namespace std;
int main() {
    string str = "Abc 123\nDEF";
    cout << str << endl << str.length();

    string str2("qwerty");
    cout << str2 << endl << str2.length();

    string str3(str, 4, 6);
    cout << str3 << endl << str3.length();

    string str4(4, 3);
    cout << str4 << endl << str4.length();

    int x = 5;
    int y = x;
    x++;
    cout << x << endl;
    cout << y << endl;

    string sx = "abc";
    string sy = sx;
    sx[0] = 'd';
    cout << sx << endl;
    cout << sy << endl;

    char buffer[20];
    string strx ("Test string...");
    size_t length = strx.copy(buffer, 6, 5);
    buffer[length] = '\0';
    cout << "buffer contains: " << buffer << '\n';

    string a = "abcde";
    string b = "abcdf";
    cout << (a == b) << endl;
    cout << a.compare(b) << endl;
}