#include <bits/stdc++.h>
using namespace std;

/**
 * 一個可以切成n*m小塊的巧克力
 * 要切幾刀才可以將其分成n*m小塊？
 * 一刀只能將一塊巧克力切成兩塊！
**/

int main()
{
    int m, n;
    while (cin >> m >> n)
        cout << (n - 1) + (n * (m - 1)) << endl;

    return 0;
}