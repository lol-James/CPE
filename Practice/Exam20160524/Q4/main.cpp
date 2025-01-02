#include <bits/stdc++.h>

using namespace std;

inline bool isPrime(int n) {
    for (int i = 2; i * i <= n; ++i) if (n % i == 0) return false;
    return true;
}

inline unsigned long long f(unsigned long long n) {
    return n * n + n + 41;
}

int main() {
    vector<bool> v(10001); for (int i = 0; i < 10002; ++i) v[i] = isPrime(f(i));
    int a, b;
    while (cin >> a >> b) {
        int count = 0;
        for (int i = a; i <= b; ++i) count += v[i];
        double ans = (double)100 * count / (b - a + 1) + 0.0000001; // +0.0000001 uva才會ac
        printf("%0.2lf\n", ans);
    }

    return 0;
}