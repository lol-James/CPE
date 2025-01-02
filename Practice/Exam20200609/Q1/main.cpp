#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    while (cin >> t && t) {
        int n, m; cin >> n >> m;
        while (t--) {
            int x, y; cin >> x >> y;
            if (x == n || y == m) cout << "divisa" << endl;
            else if (x < n && y > m) cout << "NO" << endl;
            else if (x > n && y > m) cout << "NE" << endl;
            else if (x > n && y < m) cout << "SE" << endl;
            else cout << "SO" << endl;
        }
    }


    return 0;
}