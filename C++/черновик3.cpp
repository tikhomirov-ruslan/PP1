#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector <int> v;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    v.push_back(a);
  }
  reverse (v.begin(), v.end());
  for (int j = 0; j < v.size(); j++) {
    cout << v[j] << " ";
  }
}