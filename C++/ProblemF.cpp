#include <iostream>
using namespace std;
int main() {
    int wake1, wake2, exam1, exam2;
    cin >> wake1 >> wake2 >> exam1 >> exam2;
    int k, l;
    l = exam1 * 60 + exam2;
    k = wake1 * 60 + wake2;
    if (l - k > 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}