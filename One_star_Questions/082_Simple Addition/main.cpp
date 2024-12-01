#include <bits/stdc++.h>

using namespace std;

/**
 * 用一般的做法會超時，需要優化
*/

// f(0)...f(n)的總和
long long sum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += (n % 10) * (n % 10 + 1) / 2; // 處理n的個位數部分
        n /= 10;    
        sum += 45 * n;  // 還有一個東西忘了處理，要達到(n * 10)之前，需要幾次個位數1~9(總和為45)
    }
    return sum;
}

int main()
{
    int p, q;
    while (cin >> p >> q) {
        if (p == -1 && q == -1) break;
        cout << sum(q) - sum(p - 1) << endl;
    }

    return 0;
}
