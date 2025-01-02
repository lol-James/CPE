#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        vector<int> v(4);
        cin >> v[0] >> v[1] >> v[2] >> v[3];
        sort(v.begin(), v.end());
        if ((v[0] + v[1] + v[2]) <= v[3] || v[0] <= 0) cout << "banana" << endl;
        else if (v[0] == v[3]) cout << "square" << endl;
        else if (v[0] == v[1] && v[2] == v[3]) cout << "rectangle" << endl;
        else cout << "quadrangle" << endl;
    }

    return 0;
}