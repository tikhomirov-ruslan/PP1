#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int x, y;
  cin >> x >> y;
  reverse(a + x, a + y + 1);
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}