#include <bits/stdc++.h>
using namespace std;

/**
 * 給定N, M，排序N個整數
 * 排序規則
 * if 相鄰兩數除以M的餘數不相等：由小到大排
 * else if 餘數相等：
 *      if 兩數為一奇一偶：奇數要排在偶數前面
 *      else if 皆為奇數：較大的奇數排在前面
 *      else if 皆為偶數：較小的偶數排在前面
*/

int n, m;

bool cmp(int a, int b)
{
    if (a % m == b % m)
    {
        if (a % 2 != 0 && b % 2 == 0) return true;
        else if (a % 2 == 0 && b % 2 != 0) return false;
        else if (a % 2 != 0 && b % 2 != 0) return a > b;
        else return a < b;
    }
    return (a % m) < (b % m);
}

int main()
{
    while (cin >> n >> m)
    {
        cout << n << " " << m << endl;
        if (n == 0 && m == 0) break;
        int num[n];
        for (int i = 0; i < n; i++) cin >> num[i];
        sort(num, num + n, cmp);
        for (int i = 0; i < n; i++) cout << num[i] << endl;
    }
    return 0;
}