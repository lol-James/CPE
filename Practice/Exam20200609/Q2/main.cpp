#include <bits/stdc++.h>

using namespace std;

const int BOMB = 9999;
int r, c;

inline bool inField(int i, int j) {
    return (i >= 0 && i < r && j >= 0 && j < c);
}

int main() {
    int cases = 1;
    while (cin >> r >> c && r && c) {
        vector<vector<int> > a(r, vector<int>(c, 0));
        char ch;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> ch;
                if (ch == '*') a[i][j] = BOMB;
            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] == BOMB) {
                    if (inField(i - 1, j - 1) && a[i - 1][j - 1] != BOMB) a[i - 1][j - 1]++;
                    if (inField(i - 1, j) && a[i - 1][j] != BOMB) a[i - 1][j]++;
                    if (inField(i - 1, j + 1) && a[i - 1][j + 1] != BOMB) a[i - 1][j + 1]++;
                    if (inField(i, j - 1) && a[i][j - 1] != BOMB) a[i][j - 1]++;
                    if (inField(i, j + 1) && a[i][j + 1] != BOMB) a[i][j + 1]++;
                    if (inField(i + 1, j - 1) && a[i + 1][j - 1] != BOMB) a[i + 1][j - 1]++;
                    if (inField(i + 1, j) && a[i + 1][j] != BOMB) a[i + 1][j]++;
                    if (inField(i + 1, j + 1) && a[i + 1][j + 1] != BOMB) a[i + 1][j + 1]++;
                }
            }
        }

        if (cases != 1) cout << endl;
        cout << "Field #" << cases++ << ":" << endl;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] == BOMB) cout << "*";
                else cout << a[i][j];
            }
            cout << endl;
        }
    }


    return 0;
}