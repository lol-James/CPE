#include <bits/stdc++.h>

using namespace std;

/**
 * 找到一個最大正整數，其因數和為S
 * 預處理
**/

int main() {
    int a[1001] = {0};
    a[0] = 0;
    a[1] = 1;
    for (int i = 0; i <= 1000; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) sum += j;
        } 
        a[i] = sum;
    }

    int cases = 0, n;
    while (cin >> n) {
        if (n == 0) break;
        int i;
        for (i = n; i >= 0; i--) {
            if (a[i] == n) break;
        }
        if (i >= 0) {
            cout << "Case " << ++cases << ": " << i << endl;
        }
        else {
            cout << "Case " << ++cases << ": " << -1 << endl;
        }
    }

    return 0;
}