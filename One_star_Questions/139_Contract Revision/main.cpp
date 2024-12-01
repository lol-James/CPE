#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    while (cin >> n >> s) {
        if (n == 0 && s == "0") break;
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] - '0' == n) continue;
            else {
                if (s[i] - '0' == 0 && ans == "") continue; // 前置0要忽略
                ans += s[i];
            }
        }
        if (ans == "") cout << "0" << endl;
        else cout << ans << endl;
    }

    return 0;
}