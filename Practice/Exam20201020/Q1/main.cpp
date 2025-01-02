#include <iostream>

using namespace std;

/**
 * t:測資組數
 * n:模擬的天數
 * p:表示共有幾個政黨
 * 求出共罷會了多少天
 * 起始日為星期天，每週的星期五和星期六不罷會
**/

int main() {
    int t; cin >> t;
    while (t--) {
        int n, p; cin >> n >> p;
        int pi[p]; for (int i = 0; i < p; i++) cin >> pi[i];
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 7 == 6 || i % 7 == 0) continue; // 星期五和星期六不罷會
            for (int k = 0; k < p; k++) {
                if (i % pi[k] == 0) {
                    count++;
                    break;  // 不可重複計算，如果已經罷會了，就可以跳出迴圈，進行後一天的判斷
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}