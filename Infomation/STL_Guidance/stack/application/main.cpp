#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        if (n == 0) break;
        vector<int> v(n);
        while (cin >> v[0]) {
            if (v[0] == 0) break;
            for (int i = 1; i < v.size(); i++) {
                cin >> v[i];
            }

            stack<int> station;
            int now = 1;    // 現在處理到第幾節火車(尚未進站)
            bool ok = true; // 是否達成任務
            
            for (int i = 0; i < n; i++) {
                // 如果當前處理的編號恰為所需
                if (now == v[i]) {
                    // 直接進站再出站，完成調度，now+1處理下一台火車
                    now++;     
                } 
                // 如果目標編號在now的後面，就將目標編號前面的車廂都進站，就可以得到目標編號車廂了
                else if (now < v[i]) {
                    // 一直進站，直到找到目標編號
                    while (now != v[i]) {
                        station.push(now);
                        now++;
                    }
                    // 直接進站再出站，完成調度，now+1處理下一台火車
                    now++;
                }
                // 剩餘情況
                else {
                    // 車站還有車廂，且最上層的恰為目標車廂
                    if (!station.empty() && station.top() == v[i]) {
                        station.pop();
                    }
                    // 失敗了！
                    else {
                        ok = false;
                        break;
                    }
                }
            }

            cout << (ok ? "Yes" : "No") << endl;
        }
        cout << endl;
    } 

    return 0;
}