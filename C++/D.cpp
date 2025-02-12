#include <iostream>
using namespace std;
int main() {
int a, i, nod;
cin >> a;
i = a;
nod = a;
while (i > 1) {
    if (a % i == 0) {
        nod = i;
    }
    i = i - 1;
}
cout << nod;
  return 0;
}