#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        // n：參賽者，m：廚師，每一場比賽的總人數為m個廚師+m個參賽者
        int n, m;   
        cin >> n >> m;
        int ans = 0;
        while (n >= m) {
            // 一關至少可以比n/m場，取出n/m個獲勝者，剩下n%m個人為種子，下一關再一起比
            ans += n / m;
            // n == m：比到最後一關了，n設為0並跳出迴圈，代表比賽結束
            if (n == m) {   
                n = 0;
                break;
            } 
            else {
                n = n / m + n % m;
            }
        }
        if (n == 0) cout << ans << endl;
        else cout << "cannot do this" << endl;
    }

    return 0;
}