#include <iostream>
using namespace std;
bool checker(int n) {
    int last = n % 10;
    int sum = 0;
    while (n > 0) {
        int k = n % 10;
        sum += k;
        n /= 10;
    }
    if (sum % last == 0) {
        return true;
    }else return false;
}
int main() {
    int n;
    cin >> n;
    if (checker(n)) {
        cout << "YES";
    }else cout << "NO";
    return 0;
}