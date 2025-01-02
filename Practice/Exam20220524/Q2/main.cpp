#include <bits/stdc++.h>

using namespace std;

/**
 * 只有第一隻母蜂永遠不死
 * 每經過一年
 * 母會生一公
 * 公會生一公一母
 * 生產後的蜜蜂就會死去
 * 
 * M    F
 * 0    1
 * 1    1
 * 2    2
 * 4    3
 * 7    5
 * => M_n = M_n-1 + F_n-1
 *    and F_n = M_n-1 + 1
*/

int main() {
    long long n;
    while (cin >> n && n != -1) {
        long long F = 1, M = 0;
        for (int i = 1; i <= n; i++) {
            long long temp = M; 
            M += F;
            F = temp + 1;
        }
        cout << M << " " << M + F << endl;
    }


    return 0;
}