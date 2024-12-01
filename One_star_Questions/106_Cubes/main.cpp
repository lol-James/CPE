#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, pair<int, int> > mp;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            int result = i * i * i - j * j * j;
            if (0 < result && result <= 10000 && mp.count(result) == 0) {
                mp[result] = pair<int, int>(i, j);
            }
        }
    }

    int n;
    while (cin >> n) {
        if (n == 0) break;
        if (mp.count(n) == 0) {
            cout << "No solution" << endl;
        }
        else {
            cout << mp[n].first << " " << mp[n].second << endl;
        }
    }

    return 0;
}