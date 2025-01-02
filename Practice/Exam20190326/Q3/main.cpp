#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string, int> mp;
    int t; cin >> t;
    while (t--) {
        string language, other;
        cin >> language;
        getline(cin, other);
        mp[language]++;
    }
    for (auto& it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}