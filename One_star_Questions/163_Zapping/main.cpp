#include <bits/stdc++.h>

using namespace std;

/**
 * if a < b 所需次數
 * 按上鍵：b - a
 * 按下鍵：100 - (b - a)
*/

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a == -1 && b == -1) break;
        if (a > b) swap(a, b);  // 簡化計算，令a < b
        cout << min((b - a), (100 - (b - a))) << endl;

    }

    return 0;
}