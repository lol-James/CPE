#include <bits/stdc++.h>

using namespace std;

/**
 * 從給定的Fred數列找到Mary數列
 * Mary數列有以下特性
 * Mary數列的值從頭開始涼涼一組
**/

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

        bool flag = false;  // true: 目標為前項較大，false: 目標為前項較小
        int ans = 1;
        for (int i = 1; i < n; i++) {
            if (flag == false && a[i - 1] > a[i]) {
                ans++;
                flag = !flag;
            }
            else if (flag == true && a[i - 1] < a[i]) {
                ans++;
                flag = !flag;
            }
        }        
        cout << ans << endl;
    }

    return 0;
}