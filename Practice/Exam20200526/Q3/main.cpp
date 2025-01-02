#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<string, pair<int, int>> mp;
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            int a, b; cin >> a >> b;
            mp[s] = make_pair(a, b);
        }
        cin >> n;
        vector<int> v(n);
        while (n--) {
            int price; cin >> price;
            vector<string> ans;
            for (auto& item : mp) {
                if (item.second.first <= price && price <= item.second.second) {
                    ans.push_back(item.first);
                }
            }
            if (ans.size() != 1) {
                cout << "UNDETERMINED" << endl;
            }
            else {
                cout << ans[0] << endl;
            }
        }
        if (t != 0) cout << endl;
    }

    return 0;
}