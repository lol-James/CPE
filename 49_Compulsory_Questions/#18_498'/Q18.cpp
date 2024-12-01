#include <bits/stdc++.h>
using namespace std;

/**
 * 多項式微分
 * 讀資料使用stringstream搭配vector
 * 常數項微分為0, 直接pop掉不管
 * vector翻轉
 * 使用for算答案
*/

int main()
{
    string s;
    int x;
    vector<int> v;

    while (cin >> x)
    {
        getline(cin, s); // 清空輸入流
        getline(cin, s);
        stringstream ss(s);
        v.clear();
        while (ss >> s)           // 從ss取一個字串出來給s
            v.push_back(stoi(s)); // stoi()可將string轉int
        v.pop_back();             // 常數項微分後會不見，所以可以pop掉
        reverse(v.begin(), v.end());
        long long mul = 1, ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ans += v[i] * (i + 1) * mul;
            mul *= x;
        }
        cout << ans << endl;
    }

    return 0;
}