#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, n;
    while (cin >> l >> n) {
        map<string, string> mp;
        string str1, str2;
        for (int i = 0; i < l; i++) {
            cin >> str1 >> str2;
            mp[str1] = str2;
        }

        string a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (auto& str : a) {
            // 有特定複數形態
            if (mp.find(str) != mp.end()) {
                cout << mp[str] << endl;
            }
            // 字音+y 去y+ies
            else if (
                str[str.length() - 1] == 'y' && 
                str[str.length() - 2] != 'a' && 
                str[str.length() - 2] != 'e' && 
                str[str.length() - 2] != 'i' && 
                str[str.length() - 2] != 'o' && 
                str[str.length() - 2] != 'u'
            ) {
                cout << str.substr(0, str.length() - 1) << "ies" << endl;
            }
            // 特殊字尾+es
            else if (
                str[str.length() - 1] == 'o' ||
                str[str.length() - 1] == 's' ||
                str[str.length() - 1] == 'x' ||
                str.substr(str.length() - 2, 2) == "ch" ||
                str.substr(str.length() - 2, 2) == "sh"
            ) {
                cout << str << "es" << endl;
            }
            // 一般規則直接+s
            else {
                cout << str << "s" << endl;
            }
        }

    }

    return 0;
}