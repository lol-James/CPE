#include <bits/stdc++.h>

using namespace std;

inline bool isPrime(int n) {
    for (int i = 2; i * i <= n; ++i) if (n % i == 0) return false;
    return true;
}

int main() {
    vector<int> p;
    for (int i = 1; i < INT_MAX; i++) {
        if (isPrime(i)) p.push_back(i);
        if (p.size() == 1005) break;
    }

    int n, c;
    while (cin >> n >> c) {
        vector<int> v;
        for (int i = 0; p[i] <= n; ++i) v.push_back(p[i]);
        cout << n << " " << c << ":";
        if (v.size() % 2 == 0) {
            if (c * 2 >= v.size()) {
                for (int i = 0; i < v.size(); ++i) cout << " " << v[i];
            }
            else {
                for (int i = v.size() / 2 - c; i <= v.size() / 2 + c - 1; i++) cout << " " << v[i];
            }
        }
        else {
            if (c * 2 - 1 >= v.size()) {
                for (int i = 0; i < v.size(); ++i) cout << " " << v[i];
            }
            else {
                for (int i = v.size() / 2 - c + 1; i <= v.size() / 2 + c - 1; i++) cout << " " << v[i];
            }
        }
        cout << endl << endl;
    }


    return 0;
}