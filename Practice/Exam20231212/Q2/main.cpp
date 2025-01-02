#include <bits/stdc++.h>

using namespace std;

const int dxdy[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

bool win(char a, char b) {
    if (a == 'R') return b == 'S';
    if (a == 'P') return b == 'R';
    if (a == 'S') return b == 'P';
}

int main() {
    int t; cin >> t;
    while (t--) {
        int r, c, n; cin >> r >> c >> n;
        vector<vector<char> > v(r, vector<char>(c));
        for (int i = 0; i < r; i++) 
            for (int j = 0; j < c; j++)
                cin >> v[i][j];
        for (int d = 0; d < n; d++) {
            // 因為一個格子可能影響他人，也可能被他人影響，故需要temp
            auto temp(v);
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    for (int k = 0; k < 4; k++) {
                        int otherX = i + dxdy[k][0];
                        int otherY = j + dxdy[k][1];
                        if (otherX >= 0 && otherX < r && otherY >= 0 && otherY < c) {
                            if (win(temp[i][j], temp[otherX][otherY]))
                                v[otherX][otherY] = temp[i][j];
                        }
                    }
                }
            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << v[i][j];
            }
            cout << endl;
        }
        if (t) cout << endl;
    }

    return 0;
}