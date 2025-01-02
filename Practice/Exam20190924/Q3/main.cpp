#include <bits/stdc++.h>

using namespace std;

bool isWin(const vector<vector<bool> >& check) {
    for (int i = 0; i < 5; i++) 
        if (check[i][0] == true && 
            check[i][1] == true &&
            check[i][2] == true &&
            check[i][3] == true &&
            check[i][4] == true) 
            return true;
    
    for (int i = 0; i < 5; i++) {
        if (check[0][i] == true &&
            check[1][i] == true &&
            check[2][i] == true &&
            check[3][i] == true &&
            check[4][i] == true)
            return true;
    }

    if (check[0][0] == true && check[1][1] == true && check[2][2] == true && check[3][3] == true && check[4][4] == true) return true;
    if (check[0][4] == true && check[1][3] == true && check[2][2] == true && check[3][1] == true && check[4][0] == true) return true;

    return false;
}


int main() {
    int t; cin >> t;
    while (t--) {
        vector<vector<int> > a(5, vector<int>(5, 0));
        vector<vector<bool> > check(5, vector<bool>(5, false));
        check[2][2] = true;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (i == 2 && j == 2) continue; // 中間的格子不用判斷
                cin >> a[i][j];
            }
        }
        vector<int> numbers(75); for (int i = 0; i < 75; i++) cin >> numbers[i];
        int i;
        for (i = 0; i < 75; i++) {
            for (int j = 0; j < 5; j++) {
                for (int k = 0; k < 5; k++) {
                    if (numbers[i] == a[j][k]) check[j][k] = true;
                    if (isWin(check)) goto Flag;
                }
            }
        }
        Flag:
        cout << "BINGO after " << i + 1 << " numbers announced" << endl;
    }

    return 0;
}