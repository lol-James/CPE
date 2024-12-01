#include <bits/stdc++.h>

using namespace std;

/**
 * 給一個n
 * 從最低位開始
 * 第奇數個1放到a的對應位置
 * 第偶數個1放到b的對應位置
 * 其餘填0
 * 
 * ex 
 * if n = 110110101
 * => a = 010010001
 *    b = 100100100
 * 
**/

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int a = 0, b = 0;
        bool odd1 = true;   
        for (int i = 0; i < 31; i++) {
            if (n & (1 << i)) { // 判斷二進制的第i位是否為1
                if (odd1) a |= (1 << i);    // 如果目前的這個1是奇數個1，將a的第i位更新為1
                else b |= (1 << i);         // 反之，將b的第i位更新為1
                odd1 = !odd1;  // 更新odd1的狀態             // odd1反向
            }
        }
        cout << a << " " << b << endl;
    }

    return 0;
}