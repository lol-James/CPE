#include <bits/stdc++.h>

using namespace std;

/**
 * A, B各拿出n張不同的牌與對方進行交換
 * A, B得到的牌要是自己不曾擁有過的
 * 求n的最大值
 * => 差集取最小的
**/

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;
        set<int> setA, setB, unionAB;
        int n;
        for (int i = 0; i < a; i++) {
            cin >> n;
            setA.insert(n);
            unionAB.insert(n);
        }
        for (int i = 0; i < b; i++) {
            cin >> n;
            setB.insert(n);
            unionAB.insert(n);
        }

        int ans = min(unionAB.size() - setA.size(), unionAB.size() - setB.size());
        cout << ans << endl;
    }

    return 0;
}