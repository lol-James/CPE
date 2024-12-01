#include <bits/stdc++.h>

using namespace std;

int main()
{
    string card[52], word[52];
    int order[52];
    int n;
    while (cin >> n) {
        if (n == 0) break;

        for (int i = 0; i < n; i++) {
            // card[i]: 該張牌的名稱
            // word[i]: 走...步到達該張牌
            cin >> card[i] >> word[i];  
            order[i] = -1;  // -1:目前空出來的位置
        }
        
        int currentIndex = 0;
        for (int i = 0; i < n; i++) {
            int len = word[i].length();
            while (true) {
                // 特殊，需要order[currentIndex]為空才算走一步
                if (order[currentIndex] == -1) {
                    len--;
                }
                // 當前格子為空且步數都走完了
                if (order[currentIndex] == -1 && len == 0)
                    break;
                currentIndex = (currentIndex + 1) % n;
            }            
            order[currentIndex] = i;
        }

        for (int i = 0; i < n; i++) {
            if (i != 0) cout << " ";
            cout << card[order[i]];
        }
        cout << endl;
    }

    return 0;
}