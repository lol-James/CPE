#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int k;
    while (cin >> k) {
        if (k == 0) break;
        int n, m;
        cin >> n >> m;  // 基准點
        while (k--) {
            int x, y;
            cin >> x >> y;
            if (x == n || y == m) cout << "divisa\n";
            else if (x > n && y > m) cout << "NE\n";
            else if (x > n && y < m) cout << "SE\n";
            else if (x < n && y > m) cout << "NO\n";
            else if (x < n && y < m) cout << "SO\n";
        }
    }

    return 0;
}