#include <bits/stdc++.h>

using namespace std;

int main()
{
    double vt, v0;
    while (cin >> vt >> v0) {
        if (vt == 0 && v0 == 0) break;
        
        double n = vt / (2 * v0);
        int ans, t = n;
        if (vt <= v0) ans = 0;  // 連一片都做不出來
        else if (vt <= 2 * v0) ans = 1; // 只做得出一片
        else if (n - t == 0.5) ans = 0; // 因為要取整數，剩下的材料要做不做，長度都相同，依題意輸出0
        else if (n - t < 0.5) ans = t;  // 因為要取整數，剩下的做不出一片
        else ans = t + 1;               // 因為要取整數，剩下的材料還可以再做一片

        cout << ans << endl;
    } 

    return 0;
}