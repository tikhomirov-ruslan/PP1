#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a % 2 != 0) {
		cout << "Super";
	}
	else if (a >= 2 && a <= 5 && a % 2 == 0) {
		cout << "Not Super";
	}
	else if (a % 2 == 0 && a >= 6 && a <= 20) {
		cout << "Super";
	}
	else if (a > 20 && a % 2 == 0) {
		cout << "Not Super";
	}
	return 0;
}