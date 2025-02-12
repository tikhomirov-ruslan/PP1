#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    int w[q][q];
    int p =1;
    if(q%2 != 0)
    {
        w[(q-1)/2][(q-1)/2] = q*q;
    }
    for(int i=0;i<q/2;i++)
    {
        for(int s=i;s<q-i;s++)
        {
            w[i][s] = p;
            p++;
        }
        for(int s=i+1;s<q-i;s++)
        {
            w[s][q-1-i] = p;
            p++;
        }
        for(int s=q-2-i;s>=i;s--)
        {
            w[q-1-i][s] = p;
            p++;
        }
        for(int s=q-2-i;s>i;s--)
        {
            w[s][i] = p;
            p++;
        }
    }
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            cout << w[i][s] <<" ";
        }
        cout << endl;
    }
}