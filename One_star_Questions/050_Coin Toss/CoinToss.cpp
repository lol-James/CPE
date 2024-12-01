#include <bits/stdc++.h>
using namespace std;

/**
 * 題意：投n次硬幣，出現至少連續k個正面的情況有幾種？
 * n可能到100，long long也會overflow，需利用字串處理
 * 動態規劃+反面解：
 * a[i][j]代表投i次連續正面至多j次的情況有幾種
 * 所求 = a[i][i] - a[i][j - 1]
**/

const int MAX = 100;

string a[MAX + 1][MAX + 1];

inline string reverse(const string &x)
{
    string str = x;
    reverse(str.begin(), str.end());
    return str;
}

// get 2*x
inline string doubleValue(string x)
{
    x = reverse(x);
    string result;
    int carry = 0, n;
    char cn; // charNumber
    for (int i = 0; i < x.size(); i++)
    {
        n = (x[i] - '0') * 2 + carry;
        if (n >= 10)
        {
            cn = n - 10 + '0';
            carry = 1;
        }
        else
        {
            cn = n + '0';
            carry = 0;
        }
        result += cn;
    }
    if (carry == 1) result += '1';
    return reverse(result);
}

// get x - y, x > y
inline string sub(string x, string y)
{
    string result;
    char cn;
    int carry = 0;
    x = reverse(x);
    y = reverse(y);
    y.insert(y.end(), x.size() - y.size(), '0');
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] - carry >= y[i])
        {
            cn = x[i] - carry - y[i] + '0';
            carry = 0;
        }
        else
        {
            cn = x[i] + 10 - carry - y[i] + '0';
            carry = 1;
        }
        result += cn;
    }
    result = reverse(result);
    int j = 0;
    while (result[j] == '0') result = result.erase(j, 1);
    return result;
} 

int main()
{
    for (int i = 0; i <= MAX; i++) a[i][0] = a[0][i] = "1";
    for (int i = 1; i <= MAX; i++)
    {
        for (int j = 1; j <= MAX; j++)
        {
            if (i - 1 < j)  // 第i個不管是正面還是反面都為合法情況
                a[i][j] = doubleValue(a[i - 1][j]);
            else if (i - 1 == j)    // 會有一個不合法情況：i - 1次全為正再投正
                a[i][j] = sub(doubleValue(a[i - 1][j]), "1");
            else    // 不合法情況：i-j到i-1皆為正再投正，此時i-j-1必為反，所以所有不合法情況為a[i-j-2][j]
               a[i][j] =  sub(doubleValue(a[i - 1][j]), a[i - j - 2][j]);
        }
    }
    int n, k;
    while (cin >> n >> k) cout << sub(a[n][n], a[n][k - 1]) << endl;

    return 0;
}