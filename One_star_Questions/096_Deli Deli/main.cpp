#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, n;
    while (cin >> l >> n) {
        map<string, string> mp;
        string str, strs;
        for (int i = 0; i < l; i++) {
            cin >> str >> strs;
            mp[str] = strs;
        }

        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (auto str : v) {
            if (mp.find(str) != mp.end()) {
                cout << mp[str] << endl;
            }
            else if (str[str.length() - 1] == 'y' &&
                     str[str.length() - 2] != 'a' &&
                     str[str.length() - 2] != 'e' &&
                     str[str.length() - 2] != 'i' &&
                     str[str.length() - 2] != 'o' &&
                     str[str.length() - 2] != 'u') {
                cout << str.substr(0, str.length() - 1) << "ies" << endl;
            }
            else if (str[str.length() - 1] == 'o' ||
                     str[str.length() - 1] == 's' ||
                     str[str.length() - 1] == 'x' || 
                     str.substr(str.length() - 2, 2) == "ch" ||
                     str.substr(str.length() - 2, 2) == "sh"                      ) {
                cout << str << "es" << endl;
            }
            else {
                cout << str << "s" << endl;
            }

        }
    } 

    return 0;
}