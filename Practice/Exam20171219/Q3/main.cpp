#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, n;
    while (cin >> l >> n) {
        map<string, string> mp;
        for (int i = 0; i < l; i++) {
            string s1, s2; cin >> s1 >> s2;
            mp[s1] = s2;
        }
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            if (mp.find(s) != mp.end()) {
                cout << mp[s] << endl;
            }
            else if (s[s.length() - 1] == 'y' && 
                     s[s.length() - 2] != 'a' &&
                     s[s.length() - 2] != 'e' &&
                     s[s.length() - 2] != 'i' &&
                     s[s.length() - 2] != 'o' &&
                     s[s.length() - 2] != 'u'
                     ) {
                cout << s.substr(0, s.length() - 1) << "ies" << endl;
            }
            else if (s[s.length() - 1] == 'o' || 
                     s[s.length() - 1] == 's' || 
                     s[s.length() - 1] == 'x' ||
                     s.substr(s.length() - 2) == "ch" ||
                     s.substr(s.length() - 2) == "sh"
                     ) {
                cout << s << "es" << endl;
            }
            else {
                cout << s << "s" << endl;
            }

        }
    }

    return 0;
}