#include <iostream>
using namespace std;
int main(){
    string s ;
    cin >> s ;
    // int arr[s.size()] , arr2[t.size()];
    int max = -1;
    for(int i = 0; i < s.size();i++){
        char num1 = s[i];
        int num = num1;
        if(max < num){
            max = num;
        }
    }
    cout << char(max);
    return 0;
}