#include <bits/stdc++.h>

using namespace std;

int getSum(const int n) {
    int res = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) res += i;
    }
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int sum = getSum(n);
        if (sum < n) cout << "deficient" << endl;
        else if (sum == n) cout << "perfect" << endl;
        else cout << "abundant" << endl;
    }


    return 0;
}