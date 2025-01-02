#include <bits/stdc++.h>

using namespace std;

// 統計出現次數最多的字母

int main() {
    string s;
    while (getline(cin, s)) {
        map <char, int> mp;
        int mx = -1;
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                mp[s[i]]++;
                mx = max(mx, mp[s[i]]);
            }
        }
        for (auto& i : mp) if (i.second == mx) cout << i.first;
        cout << " " << mx << endl;
    }

    return 0;
}