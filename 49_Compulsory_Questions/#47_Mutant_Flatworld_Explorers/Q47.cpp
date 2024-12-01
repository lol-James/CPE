#include <bits/stdc++.h>

using namespace std;

int a[55][55];  // 用於記錄此位置會不會掉下去
int dx[] = {0, 1, 0, -1}; // N, E, S, W
int dy[] = {1, 0, -1, 0};

int main()
{
    map<char, int> mp1; // 用於做NESW轉換的兩個map
    map<int, char> mp2;
    mp1['N'] = 0; mp1['E'] = 1; mp1['S'] = 2; mp1['W'] = 3; 
    mp2[0] = 'N'; mp2[1] = 'E'; mp2[2] = 'S'; mp2[3] = 'W';

    int row, col; cin >> row >> col;
    int R, C; char d; string s;
    while (cin >> R >> C >> d >> s) {
        int D = mp1[d];
        bool lost = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'F') {
                int nR = R + dx[D];
                int nC = C + dy[D];
                if (nR >= 0 && nR <= row && nC >= 0 && nC <= col)   // 必然不會掉下去
                    R = nR, C = nC;
                else {
                    // 這個機器人正位在有標記的地方, 會忽略會讓他掉下去的指令。
                    if (a[R][C] == 1) continue;
                    else {
                        cout << R << " " << C << " " << mp2[D] << " LOST\n";
                        lost = true;
                        a[R][C] = 1;
                        break;
                    }
                }
            }
            else if (s[i] == 'R') D = (D + 1) % 4;
            else if (s[i] == 'L') D = (D + 3) % 4;
        }
        if (!lost) cout << R << " " << C << " " << mp2[D] << "\n";
    }

    return 0;
}