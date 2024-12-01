#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cases = 1; cases <= t; ++cases) {
        int n;
        cin >> n;
        map<string, int> mp;
        string subject;
        int day;
        for (int i = 0; i < n; ++i) {
            cin >> subject >> day;
            mp[subject] = day;
        }
        cin >> day;
        cin >> subject;
        cout << "Case " << cases << ": ";
        if (mp.count(subject)) {
            if (mp[subject] <= day) cout << "Yesss\n";
            else if (mp[subject] <= day + 5) cout << "Late\n";
            else cout << "Do your own homework!\n";
        }
        else {
            cout << "Do your own homework!\n";
        } 
    }


    return 0;
}