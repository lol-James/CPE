#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    cin.ignore();
    while (t--) {
        map<char, char> mp;
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        cout << s2 << endl;
        cout << s1 << endl;
        for (int i = 0; i < s1.size(); i++) mp[s1[i]] = s2[i];
        string str;
        while (getline(cin, str)) {
            if (str == "") break;
            for (const auto& ch : str) {
                if (mp.find(ch) != mp.end()) cout << mp[ch];
                else cout << ch;
            }
            cout << endl;
        }
        if (t) cout << endl;
    }


    return 0;
}