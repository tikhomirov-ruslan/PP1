#include <iostream>
using namespace std;
int main()
{
    int n, mult = 1, sum = 0;
    cin >> n;
    while (n != 0)
    {
        mult *= n % 10;
        sum += n % 10;
        n /= 10;
    }
    cout << mult + sum << endl;
    return 0;
}