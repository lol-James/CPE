#include <bits/stdc++.h>

using namespace std;

inline vector<int> getNewVector(const vector<int> &v) {
    vector<int> res;
    for (int i = 0; i < v.size(); i++) res.push_back(abs(v[i] - v[(i + 1) % v.size()]));
    return res;
}

inline bool isAllZERO(const vector<int> &v) {
    for (int i = 0; i < v.size(); i++) if (v[i] != 0) return false;
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n), temp(n);
        while (n--) cin >> v[n];
        int i;
        for (i = 0; i < 1000; i++) {
            v = getNewVector(v);
            if (isAllZERO(v)) break;
        }
        if (i == 1000) cout << "LOOP" << endl;
        else cout << "ZERO" << endl;
    }

    return 0;
}