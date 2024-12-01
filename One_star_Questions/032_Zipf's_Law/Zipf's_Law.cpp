#include <bits/stdc++.h>
using namespace std;

/**
 * 給定一個數字n
 * 統計一段文章內，出現次數為n的字詞並按照字母順序輸出
 * 使用map
**/

map<string, int> mp;

void getWords(const string &line);

int main()
{
    int n;
    string line;
    bool notFirst = false;
    while (cin >> n)
    {
        while (getline(cin, line))
        {
            if (line == "EndOfText") break;
            getWords(line);
        }
        if (notFirst) cout << endl;
        else notFirst = true;
        bool hasWord = false;
        for (auto &i : mp)
        {
            if (i.second == n)
            {
                cout << i.first << endl;
                hasWord = true;
            }
        }
        if (hasWord == false) cout << "There is no such word." << endl;
        mp.clear();
    }

    return 0;
}

void getWords(const string &line)
{
    string temp = "";
    for (int i = 0; i < line.size(); i++)
    {
        if (isalpha(line[i]))
        {
            temp += tolower(line[i]);
        }
        else
        {
            if (temp.size() > 0)
            {
                mp[temp]++;
                temp = "";
            }
        }
    }
    // 最後一個字可能會沒有記錄到，要注意！！
    if (temp.size() > 0) mp[temp]++;
}