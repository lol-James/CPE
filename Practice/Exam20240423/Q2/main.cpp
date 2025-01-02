#include <bits/stdc++.h>

using namespace std;

/**
 * H: 墻高
 * U: 初始白天可爬的距離
 * D: 晚上固定下滑的距離
 * F: 疲勞因子，百分比表示，用來計算每天會少爬多少的公差
**/

int main() {
    double  H, U, D, F;
    while (cin >> H >> U >> D >> F && H != 0) {
        double height = 0;  // 蝸牛目前爬的高度
        int day = 0;        // 經過的天數
        double d = U * (F / 100); // 每天少爬距離的公差
        while (height >= 0) {
            day++;
            height += U;            // 白天上爬
            if (height > H) break;  // 爬出來了
            U = max(0.0, U - d);    // 如果新U小於0，也只能算是0
            height -= D;            // 晚上下溜
        }
        if (height > H) {
            cout << "success";
        }
        else {
            cout << "failure";
        }
        cout << " on day " << day << endl;
    }

    return 0;
}