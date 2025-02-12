#include <iostream>
using namespace std;
int main() {
    int n, a, sum1 = 0, sum2 = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            sum1++;
        }
        else {
            sum2++;
        }
    }
    cout << sum1 << " " << sum2;
}