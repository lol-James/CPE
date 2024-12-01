#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    while (cin >> n) {
        if (n == 0) break;
        long long ans = 0, now, a;
        cin >> now; // 目前狀態
        for (int i = 1; i < n; i++) {
            ans += abs(now);    // 一律從最近的搬運店家搬運，所以搬運now瓶酒的工作量就是now
            cin >> a;           // 讀入新的需求
            now += a;           // 更新狀態
        }
        cout << ans << endl;
    }

    return 0;
}