#include <bits/stdc++.h>
using namespace std;

/**
 * 求十進位數轉為二進位數後1的個數
 * 用vector搭配while計算
 * 輸出二進制數時記得reverse(v.begin(), v.end());
**/

int main()
{
    int num;
    while (cin >> num)
    {
        if (num == 0) break;
        vector<int> v;
        while (num)
        {
            v.push_back(num % 2);
            num /= 2;
        }
        int count = 0;
        reverse(v.begin(), v.end());
        cout << "The parity of ";
        for (auto i : v)
        {
            if (i) count++;
            cout << i;
        }
        cout << " is " << count << " (mod 2).\n";
    }
    return 0;
}