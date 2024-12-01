#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        string s;
        cin >> s;
        int R = -1, D = -1;
        int minDis = 2000001;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'Z') {  // 餐廳藥具在同一個點
                minDis = 0;
                break;
            }
            else if (s[i] == 'R') { // 這個點有餐廳
                if (D >= 0) {
                    minDis = min(minDis, i - D);
                }
                R = i;
            }
            else if (s[i] == 'D') { // 這個點有藥局
                if (R >= 0) {
                    minDis = min(minDis, i - R);
                }
                D = i;
            }
        }

        cout << minDis << endl;
    }

    return 0;
}