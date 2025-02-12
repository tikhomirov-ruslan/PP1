#include <bits/stdc++.h>
using namespace std;
int n;
map<string, int> q;
int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		if (q[s] == 1)
			cout << "user already exists" << endl;
		else
			cout << "new user added" << endl;
		q[s] = 1;
	}	
}
