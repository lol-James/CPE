#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int m, y, c;
        string s;
        cin >> m >> y >> c >> s;
        for (const auto& i : s) {
            if (i == 'M') m--;
            else if (i == 'Y') y--;
            else if (i == 'C') c--;
            else if (i == 'R') m--, y--;
            else if (i == 'V') m--, c--;
            else if (i == 'G') y--, c--;
            else if (i == 'B') m--, y--, c--;
        }
        if (m >= 0 && y >= 0 && c >= 0) cout << "YES " << m << " " << y << " " << c << endl;
        else cout << "NO" << endl;
    }

    return 0;
}