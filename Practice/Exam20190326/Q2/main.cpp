#include <bits/stdc++.h>

using namespace std;

inline int getDigitSum(int n) {
    int res = n;
    while (n) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int num; cin >> num;
        int ans = 0;
        // if num=999999，可造成各個位數的和最大=45，所以i從num-54開始測試即可，但要確保i的起始值為>=1
        for (int i = max(1, num - 54); i < num; i++) {
            if (getDigitSum(i) == num) {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }


    return 0;
}