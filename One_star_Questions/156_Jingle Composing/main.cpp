#include <bits/stdc++.h>

using namespace std;

/**
 * map<char, int>
 * 根據音符比例通分，讓比例都變成整數
*/

int main() {
    map<char, int> mp;
    mp['W'] = 64;
    mp['H'] = 32;
    mp['Q'] = 16;
    mp['E'] = 8;
    mp['S'] = 4;
    mp['T'] = 2;
    mp['X'] = 1;

    string s;
    while (cin >> s) {
        if (s == "*") break;
        int sum = 0, ans = 0;
        for (auto ch : s) {
            if (ch == '/') {
                if (sum == 64) ans++;
                sum = 0;
            }
            else {
                sum += mp[ch];
            }
        }
        cout << ans << endl;
    }

    return 0;
}