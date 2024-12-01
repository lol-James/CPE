#include <bits/stdc++.h>

using namespace std;

/**
 * M * 1
 * A * 3
 * R * 2
 * G * 1
 * I * 1
 * T * 1
**/

int main() {
    int n;
    cin >> n;
    while (n--) {
        map<char, int> mp;
        string s;
        cin >> s;
        for (auto ch : s) mp[ch]++;

        int ans = mp['M'] / 1;
        ans = min(ans, mp['A'] / 3);
        ans = min(ans, mp['R'] / 2);
        ans = min(ans, mp['G'] / 1);
        ans = min(ans, mp['I'] / 1);
        ans = min(ans, mp['T'] / 1);

        cout << ans << endl;
    }

    return 0;
}