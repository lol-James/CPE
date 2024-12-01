#include <bits/stdc++.h>

using namespace std;

/**
 * 最外圍不用偵測
 * 所以直接(邊長-2)/3再無條件進位 所得的就是所需聲吶數
*/

int main()
{
    int t;
    cin >> t;
    while (t--) {
        double n, m;
        cin >> n >> m;
        int ans = ceil((n-2)/3) * ceil((m-2)/3);
        cout << ans << endl;
    }

    return 0;
}