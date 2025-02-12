#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    if(N > 1) {
    if(N % 2 == 0)
    cout << N / 2;
    if(N % 2 != 0)
    cout << N;
    }
    else cout << "0";
}