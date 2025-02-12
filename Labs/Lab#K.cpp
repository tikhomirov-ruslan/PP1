#include <iostream>
using namespace std;
int main(){
    string s ;
    cin >> s ;
    int cnt = 0;
    // int arr[s.size()] , arr2[t.size()];
    for(int i = 0; i < s.size();i++){
        if( s[i] == 'e' ||  s[i] == 'a' || s[i] == 'i' ||  s[i] == 'o' || s[i] == 'u' ){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}