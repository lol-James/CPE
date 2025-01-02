#include <bits/stdc++.h>

using namespace std;

inline bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    while (cin >> n && n) {
        if (isPrime(n)) {
            cout << 0 << endl;
            continue;
        }

        int a = n, b = n;
        while (!isPrime(a)) a--;
        a++;
        while (!isPrime(b)) b++;
        b--;
        cout << b - a + 2 << endl;
    }

    return 0;
}