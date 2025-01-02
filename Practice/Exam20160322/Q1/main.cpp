#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int cases = 1; cases <= t; ++cases) {
        int n; cin >> n;
        vector<int> v(n); for (int i = 0; i < n; ++i) cin >> v[i];
        int high = 0, low = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (v[i] > v[i + 1]) low++;
            else if (v[i] < v[i + 1]) high++;
        }
        cout << "Case " << cases << ": " << high << " " << low << endl;
    }


    return 0;
}