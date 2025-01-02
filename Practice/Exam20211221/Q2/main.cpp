#include <bits/stdc++.h>

using namespace std;

/**
 * 測資不大 直接建表即可
*/

int main() {
    map<int, int> mp;
    mp[1] = 1;
    for (int num = 2; num <= 1000; num++) {
        int sum = 1 + num;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                if (i * i != num) sum += num / i;
            }
        }
        mp[sum] = num;
    }

    int cases = 1, n;
    while (cin >> n && n) {
        cout << "Case " << cases++ << ": ";
        if (mp.find(n) != mp.end()) cout << mp[n] << endl;
        else cout << -1 << endl;
    }


    return 0;
}