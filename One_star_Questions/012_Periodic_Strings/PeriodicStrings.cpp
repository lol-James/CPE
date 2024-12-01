#include <bits/stdc++.h>

using namespace std;

/**
 * 如果一個字串可以通過將另一個長度為k的字串的一個或多個重複連接起來而形成
 * 則它被稱為period k
 * 請寫一個程式讀取字串，並且判斷其最小period
 * 利用set的去重特性來做
 * 注意每2個輸出要空一行，最後一筆輸出不用再空一行
**/

int main()
{
    int n;
    string s;
    cin >> n;
    getline(cin, s);        // erase '\n'
    while (n--)
    {
        getline(cin, s);    // 讀掉空白行
        getline(cin, s);
        int len = s.size();
        int period = 1;
        set<string> str_set;
        while (period <= len)
        {
            str_set.clear();
            if (len % period == 0)
                for (int i = 0; i < len; i += period)
                    str_set.insert(s.substr(i, period));
            if (str_set.size() == 1) break;
            period++;
        }
        cout << period << "\n";
        if (n) cout << "\n";
    }

    return 0;
}