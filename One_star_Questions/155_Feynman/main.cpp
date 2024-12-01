#include <bits/stdc++.h>

using namespace std;

/**
 * f(n): n*n的棋盤格，其中包含了幾個正方形？
 * f(1) = 1
 * f(2) = 4 + 1 = 2^2 + 1
 * f(3) = 9 + 4 + 1 = 3^2 + f(2)
 * => f(n) = n^2 + f(n - 1) 
 * 
 * 測資很小 直接預處理即可
**/

int main() {
    int a[101] = {0};
    a[1] = 1;
    for (int i = 2; i < 101; i++) {
        a[i] = i * i + a[i - 1];
    }

    int n;
    while (cin >> n) {
        if (n == 0) break;
        cout << a[n] << endl;
    }

    return 0;
}