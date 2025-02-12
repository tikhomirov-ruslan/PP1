#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x % 10 == 7) {
            c++;
        }
    }
    cout << c;
}