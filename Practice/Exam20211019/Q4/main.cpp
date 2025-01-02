#include <bits/stdc++.h>

using namespace std;

/**
 * fzero(n) 代表 n!的結尾有幾個0，求fzero(a) ~ fzero(b) 有幾個不同的值
 * 1. n越大，結尾0越多
 * 2. 階乘每五個數字就會多一個0
 * 3. 所求即為[b/5] - [a/5] + 1 
**/

int main() {
    long long a, b;
    while (cin >> a >> b && a && b) cout << b / 5 - a / 5 + 1 << endl;

    return 0;
}