#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) if (n % i == 0) return false;
    return true;
}

int main() {
    int n; cin >> n;
    for (int cases = 1; cases <= n; ++cases) {
        string s; cin >> s;
        int ascii[128] = {0};
        for (auto i : s) ascii[i]++;

        bool flag = false;
        cout << "Case " << cases << ": ";
        for (int i = 0; i < 128; i++) {
            if (isPrime(ascii[i])) {
                cout << (char)i;
                flag = true;
            }
        }
        if (flag == false) cout << "empty";
        cout << endl;
    }


    return 0;
}