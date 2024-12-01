#include <bits/stdc++.h>
using namespace std;

/**
 * 根據編碼表給數字
 * 相鄰兩個編碼相同的字母僅用一個數字表示
**/

int main()
{
    string s[6] = {"BFPV", "CGJKQSXZ", "DT", "L", "MN", "R"};
    map<char, int> mp;
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < s[i].size(); j++)
            mp[s[i][j]] = (i + 1);
    string word;
    while (cin >> word)
    {
        int current = 0;
        for (int i = 0; i < word.size(); i++)
        {
            if (mp.count(word[i]))
            {
                if (current != mp[word[i]])
                {
                    cout << mp[word[i]];
                    current = mp[word[i]];
                }
            }
            else
            {
                current = 0;
            }
        }
        cout << endl;
    }

    return 0;
}