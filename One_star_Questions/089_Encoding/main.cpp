#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int cases = 0;
    while (cin >> s) {
        map<char, char> mp;
        for (int i = 0; i < 26; i++) {
            char ch;
            cin >> ch;
            mp['a' + i] = ch;
        }
        int r;
        cin >> r;
        vector<map<char, char>> v(s.length());
        for (int i = 0; i < r; i++) {
            int idx;
            char a, b;
            cin >> idx >> a >> b;
            v[idx][a] = b;
        }

        for (int i = 0; i < s.length(); i++) {
            bool flag = false;  // 是否用特殊規則加密了
            for (int j = i; j >= 0; j--) {
                if (v[j].count(s[i])) {     // 一旦符合特殊規則，就用特殊規則加密
                    s[i] = v[j][s[i]];
                    flag = true;
                    break;
                } 
            }
            if (flag) continue; // 已經用特殊規則加密了 不必再用mp加密
            s[i] = mp[s[i]];    // 用mp加密
        }
        cout << "Case #" << ++cases << ": The encoding string is " << s << ".\n\n";
    }

    return 0;
}