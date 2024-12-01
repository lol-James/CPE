#include <bits/stdc++.h>
using namespace std;

/**
 * 二進位轉十進位
 * 求GCD
 * if (gcd != 1)： All you need is love
**/


int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string str_a, str_b;
        cin >> str_a >> str_b;
        long long int decimal_a = 0, decimal_b = 0;
        for (int j = 0; j < str_a.length(); j++)
            decimal_a += (str_a[j] - '0') * pow(2, str_a.length() - j - 1);
        for (int j = 0; j < str_b.length(); j++)
            decimal_b += (str_b[j] - '0') * pow(2, str_b.length() - j - 1);
        long long int gcd = __gcd(decimal_a, decimal_b);
        if (gcd != 1)
            cout << "Pair #" << i + 1 << ": All you need is love!\n";
        else
            cout << "Pair #" << i + 1 << ": Love is not all you need!\n";
    }

    return 0;
}