#include <bits/stdc++.h>

using namespace std;

long long f(long long n) {
    if (n < 10) return n;
    int result = 0;
    while (n) {
        result += n % 10;
        n /= 10;
    }
    return f(result);
}

int main() {
    int n;
    while (cin >> n && n) cout << f(n) << endl;

    return 0;
}