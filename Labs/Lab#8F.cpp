#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
  }
  int x, y;
  cin >> x >> y;
  v.insert(v.begin() + x, y);
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}