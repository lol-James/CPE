#include <bits/stdc++.h>

using namespace std;

inline bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}

int main() {
    vector<int> primes;
    for (int i = 2; i <= 1<<15; i++) if (isPrime(i)) primes.push_back(i);
    int n;
    while (cin >> n && n) {
        int count = 0;
        for (int i = 0; i < primes.size(); i++) {
            for (int j = i; j < primes.size(); j++) {
                if (primes[i] + primes[j] == n) count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}