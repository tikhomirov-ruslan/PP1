#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, score1, score2;
    cin >> n;
    string name1, name2;
    pair <string, string> p1;
    pair <int, int> p2;
    multimap <pair <string, string>, pair <int, int>> m;
    multimap <pair <string, string>, pair <int, int>>::iterator it;
    for (int i = 0; i < n; i++) {
        cin >> name1 >> score1 >> name2 >> score2;
        p1 = make_pair (name1, name2);
        p2 = make_pair (score1, score2);
        it = m.find(p1);
        if (it != m.end()) {
            if (it -> second != p2) {
                m.insert (make_pair (make_pair (name1, name2), make_pair (score1, score2)));
            }
        }
        else {
            m.insert (make_pair (make_pair (name1, name2), make_pair (score1, score2)));
        }
    }
    for (it = m.begin(); it != m.end(); it++) {
        cout << (it -> first).first << " and " << (it -> first).second << " " << (it -> second).first + (it -> second).second << endl;
    }
}