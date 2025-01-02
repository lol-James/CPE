#include <bits/stdc++.h>

using namespace std;


int main() {
    int m, n;
    while (cin >> m >> n && m && n) {
        vector<int> a(m, 0);
        for (int i = 0; i < m * n; i++) {
            int score; cin >> score;
            a[i % m] += score;
        }
        int win = 0;
        for (int i = 0; i < m; i++) 
            if (a[i] >= a[win]) win = i;
        cout << win + 1 << endl;
    }

    return 0;
}