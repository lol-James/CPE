#include <bits/stdc++.h>

using namespace std;

/**
 * 找到不小於m的一個數，其質因數只有2and3
 * 預處理先把所有符合的數都先找出來
 * 宣告要用long long才夠大
**/

int main() {
    long long i, j;     // i: the power of 2, j: the power of 3
    vector<long long> v;
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 32; j++) {
            double p = pow(2, i) * pow(3, j);
            if (p <= 0xffffffff)
                v.push_back(p);
        }
    }
    sort(v.begin(), v.end());

    int n;
    while (cin >> n) {
        if (n == 0) break;
        cout << *lower_bound(v.begin(), v.end(), n) << endl;
    }

    return 0;
}