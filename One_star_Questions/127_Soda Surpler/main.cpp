#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int e, f, c;
        cin >> e >> f >> c;
        int total = e + f;
        int ans = 0;
        while (total >= c) {
            ans += total / c;
            total = total / c + total % c;
        }
        cout << ans << endl;
    }

    return 0;
}