#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases; cin >> cases;
    while (cases--) {
        int m, n, q; cin >> m >> n >> q;
        char rect[m][n];
        for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> rect[i][j];
        
        cout << m << " " << n << " " << q << endl;
        
        for (int i = 0; i < q; i++) {
            int ir, ic; cin >> ir >> ic; 
            char ch = rect[ir][ic];
            int l = 0;
            while (ir - l >= 0 && ic - l >= 0 && ir + l < m && ic + l < n) {
                bool flag = true;
                // left and right
                for (int k = ir - l; k <= ir + l; k++) {
                    if (rect[k][ic - l] != ch || rect[k][ic + l] != ch) {
                        flag = false;
                        break;
                    }
                }
                // up and down
                for (int k = ic - l; k <= ic + l; k++) {
                    if (rect[ir - l][k] != ch || rect[ir + l][k] != ch) {
                        flag = false;
                        break;
                    }
                }
                if (flag == false) break;

                l++;
            }
            cout << 2 * l - 1 << endl;
        }
    }

    return 0;
}