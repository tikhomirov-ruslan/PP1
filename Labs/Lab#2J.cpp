#include <iostream>
using namespace std;
int main() {
    int num, c, time;
    cin >> num;
    time = 0;
    for(int i = 1; i <= num; i++) {
        cin >> c;
        while(c > 0) {   
            if(c % 10 == 0) {
                time = time + 1;
            }
            c /= 10;
        }
    }
    cout << time;
}