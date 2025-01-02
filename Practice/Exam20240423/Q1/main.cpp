#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int mid = n/2;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += abs(a[i] - a[mid]);
        }
        cout << ans << endl;
    }    

    return 0;
}