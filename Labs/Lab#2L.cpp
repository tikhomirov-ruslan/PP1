#include <iostream>
using namespace std;
int main() {
    int num, counting;
    cin >> num;
    counting = 1;
    while(counting <= num) {
        cout << counting << " ";
        counting = counting * 2;
    }
}