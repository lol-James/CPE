#include <bits/stdc++.h>
using namespace std;

// ... 8 5 3 2 1

int main()
{
    string s1, s2;
    bool notFirst = false;
    while (cin >> s1 >> s2)
    {   
        if (notFirst) cout << endl;
        else notFirst = true;
        int n1 = s1.size(), n2 = s2.size();
        int len = max(n1, n2);
        if (n1 > n2)
            for (int i = n2; i < len; i++) s2 = "0" + s2;
        else if (n2 > n1)
            for (int i = n1; i < len; i++) s1 = "0" + s1;
        int M = 100;  // 預留進位空間
        int ans[len + M];
        for (int i = 0; i < len + M; i++) ans[i] = 0;
        for (int i = M; i < len + M; i++)
            ans[i] = (s1[i - M] - '0') + (s2[i - M] - '0');
        int last = len + M - 1;
        while (1)   // 處理進位問題
        {
            if (ans[last] > 1)  // 右邊數過來第1個位數的進位問題
            {
                ans[last] -= 2;
                ans[last - 1]++;
            }
            if (ans[last - 1] > 1)  // 右邊數過來第二個位數的進位問題
            {
                ans[last - 1] -= 2;
                ans[last]++;
                ans[last - 2]++;
            }
            for (int i = last - 2; i > 0; i--)  // 其他位數的進位問題
            {
                if (ans[i] > 1)
                {
                    ans[i] -= 2;
                    ans[i + 2]++;
                    ans[i - 1]++;
                }
            }
            for (int i = last; i >= 2; i--) // 連續2位數字皆為1的進位問題
            {
                if (ans[i - 1] == 1 && ans[i] == 1)
                {
                    ans[i] = 0;
                    ans[i - 1] = 0;
                    ans[i - 2]++;
                }
            }
            int again = 0;  // 是否需再次處理進位問題
            for (int i = 0; i <= last; i++) again += (ans[i] >= 2);
            if (again == 0) break;
        }
        bool notZero = false;
        for (int i = 0; i <= last; i++)
        {
            if (notZero) cout << ans[i];
            else if (ans[i] != 0)
            {
                notZero = true;
                cout << ans[i];
            }
        }
        cout << endl; 
    }
    
    return 0;
}
