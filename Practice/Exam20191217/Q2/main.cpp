#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    while (cin >> n && n) {
        long long ans = 0;
        for (long long i = 1; i < n; i++) 
            for (long long j = i + 1; j <= n; j++)
                ans += __gcd(i, j);
        cout << ans << endl;
    }

    return 0;
}