#include <bits/stdc++.h>
using namespace std;

// 輸出一個數的質因數個數

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0) break;
        cout << n << " : ";
        int count = 0;
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0) count++;
            while (n % i == 0) n /= i;
            if (n == 1) break;
        }
        cout << count << endl;
    }

    return 0;
}