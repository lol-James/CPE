#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        cout << 2 * (v[v.size() - 1] - v[0]) << endl;
    }


    return 0;
}