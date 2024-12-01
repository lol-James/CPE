#include <bits/stdc++.h>
using namespace std;

// 統計有幾個word

int main()
{
    string s;
    bool isNew;
    int count;
    while (getline(cin, s))
    {
        count = 0;
        isNew = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i])) isNew = true;
            else if (isNew)
            {
                    count++;
                    isNew = false; 
            }
        }
        // 最後一個單字可能會沒有統計到所以要加上isNew
        cout << count + isNew << endl;
    }

    return 0;
}