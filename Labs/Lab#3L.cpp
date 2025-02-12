#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m; cin >> m;
    int b[m];
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int c[n + m];
    for(int i = 0; i < n; i++){
        c[i] = a[i];
    }
    for(int i = 0; i < m; i++){
        c[n + i] = b[i];
    }
    /*for(int i = 0; i < n + m; i++){
        for(int j = 0; j < n + m; j++){
            if(c[i] < c[j]){
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }*/
    sort(c, c + n + m);
    for(int i = 0; i < n + m; i++){
        cout << c[i] << ' ';
    }
}