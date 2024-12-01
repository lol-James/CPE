#include <bits/stdc++.h>
using namespace std;

/**
 *  透過根與係數關係可得一下規律：
 *  -m   n  a[0]    a[1]    a[2]        a[3]
 *  X   X   1          
 *  -a  1   1       -a      
 *  -b  2   1       -a-b    ab
 *  -c  3   1       -a-b-c  ab+bc+ca    -abc
**/


int main()
{
    int n, m;
    long long a[55];
    while (cin >> n)
    {
        for (int i = 0; i < 55; i++) a[i] = 0;
        a[0] = 1;   // 領導係數必為1
        for (int i = 1; i <= n; i++)
        {
            cin >> m;
            // 由後往前做，下一步要用的資料才不會被覆蓋掉
            for (int j = i; j >= 0; j--)
                a[j + 1] += a[j] * (-1 * m);
        }
        // 打印最高項
        if (n == 1) cout << "x";
        else cout << "x^" << n;
        // 打印x^(n-1) ~ x項
        for (int i = 1; i < n; i++)
        {
            if (a[i] == 0) continue;
            if (a[i] < 0) cout << " - ";
            else cout << " + ";
            if (abs(a[i]) != 1) cout << abs(a[i]);
            if (n - i == 1) cout << "x";
            else cout << "x^" << n - i;
        }
        // 打印常數項
        if (a[n] < 0) cout << " - ";
        else cout << " + ";
        cout << abs(a[n]) << " = 0\n";
    }

    return 0;
}