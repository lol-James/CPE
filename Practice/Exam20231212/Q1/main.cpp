#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[9];
    while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8]) {
        // 判斷是否全為0，如果是的話，直接輸出0
        bool all_zero = true;
        for (int i = 0; i < 9; i++) {
            if (a[i] != 0) {
                all_zero = false;
                break;
            }
        }
        if (all_zero) {
            cout << 0 << endl;
            continue;
        }

        // 輸出多項式
        bool isFirst = true;
        for (int i = 0; i < 9; i++) {
            // 係數為0，跳過
            if (a[i] == 0) continue;

            // 正負號
            if (isFirst == true) {
                if (a[i] < 0) cout << "-";
                isFirst = false;
            }
            else {
                if (a[i] > 0) cout << " + ";
                else cout << " - ";
            }
    
            int m = 8 - i;
            // 係數絕對值不是1或為常數項時，輸出係數的絕對值，因為正負號前面已經處理過了
            if (abs(a[i]) != 1 || m == 0) {
                cout << abs(a[i]);
            }
            
            // 輸出x
            if (m > 1) cout << "x^" << m;
            else if (m == 1) cout << "x";
        }
        cout << endl;
    }    

    return 0;
}