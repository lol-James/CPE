#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, cases = 1;
    while (cin >> n && n) {
        cin.ignore(); 
        int sum = 0; 
        string s, ans = "", team = "";
        for (int i = 0; i < n; ++i) {
            getline(cin, s);
            sum += s.length();
            // 除了第一行不用加'\n'之外，其他都要用'\n'串起來成一整個字串
            if (i) ans += '\n';
            ans += s;
        }
        cin >> m;
        cin.ignore();
        for (int i = 0; i < m; ++i) {
            getline(cin, s);
            if (i) team += '\n';
            team += s;
        }

        if (ans == team) {
            cout << "Run #" << cases++ << ": Accepted " << sum << endl;
            continue;
        }
        // erase all ' ' & '\n'
        for (int i = 0; i < ans.length(); ++i) if (ans[i] == ' ' || ans[i] == '\n') ans.erase(i--, 1);
        for (int i = 0; i < team.length(); ++i) if (team[i] == ' ' || team[i] == '\n') team.erase(i--, 1);
        if (ans == team) cout << "Run #" << cases++ << ": Presentation Error " << sum << endl;
        else cout << "Run #" << cases++ << ": Wrong Answer " << sum << endl;

    }

    return 0;
}