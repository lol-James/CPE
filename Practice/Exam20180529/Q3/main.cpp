#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m && n && m) {
        vector<int> v(n); for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end(), [&](const int a, const int b) {
            int moda = a % m, modb = b % m;
            if (moda != modb) return moda < modb;
            else {
                if (a % 2 != 0 && b % 2 == 0) return true;
                else if (a % 2 == 0 && b % 2 != 0) return false;
                else if (a % 2 != 0 && b % 2 != 0) return a > b;
                else return a < b;
            } 
        });
        cout << n << " " << m << endl;
        for (auto& i : v) cout << i << endl;
    }
    cout << 0 << " " << 0 << endl;

    return 0;
}