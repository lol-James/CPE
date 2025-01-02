#include <bits/stdc++.h>

using namespace std;

/**
 * 單純的map題
*/

int main() {
    int n;
    while (cin >> n) {
        cin.ignore();   // 去'\n'
        map<string, string> mp;
        string s1, s2;
        for (int i = 0; i < n; i++) {
            getline(cin, s1);
            getline(cin, s2);
            mp[s1] = s2;
        }
        int m; cin >> m;
        cin.ignore();
        for (int i = 0; i < m; i++) {
            getline(cin, s1);
            cout << mp[s1] << endl;
        }
    }


    return 0;
}