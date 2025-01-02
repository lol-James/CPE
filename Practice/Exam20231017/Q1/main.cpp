#include <bits/stdc++.h>

using namespace std;

/**
 * 問最少需滾動幾次
 * 一次滾動向左位移一位並再最右邊加上一個新字母
**/

int main() {
    int t; cin >> t;
    while (t--) {
        int k, w; cin >> k >> w;
        vector<string> words(w);
        for (int i = 0; i < w; i++) cin >> words[i];

        int ans = k * w;    // 全部單字無法接龍，極端值
        for (int i = 0; i < w - 1; i++) {
            for (int j = 0; j < k; j++) {
                // 如果前一個字從第j位開始與後一個字的開頭到第k-j為重複，可少滾動n-j次
                if (words[i].substr(j) == words[i + 1].substr(0, k - j)) {
                    ans -= k - j;
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}