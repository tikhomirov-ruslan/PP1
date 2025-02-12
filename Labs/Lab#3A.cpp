#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            cout << a[i] << " ";
        }
    }
}
// 5
// 1 2 3 4 5 - вывод нечет
// ответ 1 3 5