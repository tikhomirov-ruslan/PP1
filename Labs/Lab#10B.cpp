#include <bits/stdc++.h>
using namespace std; 
int generate(long long mynumber, int i, int n) { 
    cout << mynumber << " "; 
    mynumber = 1; 
    if (i < n) { 
        i++; 
        for (int j = 1; j <= i; j++) { 
            mynumber *= i; 
        } 
        generate (mynumber, i, n); 
    } 
} 
int main() { 
    int n; 
    cin >> n; 
    generate (1, 0, n); 
}