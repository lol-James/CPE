#include <bits/stdc++.h>
using namespace std;

/**
 * 解碼方法：根據鍵盤位置向左移2位
 * 用map處理符號對應關係
 * 注意：\要寫成\\
*/

int main()
{
    string s[] = {"`1234567890-=", "qwertyuiop[]\\", "asdfghjkl;'", "zxcvbnm,./"};
    map<char, char> code_map;
    for (int i = 0; i < 4; i++)
        for (int j = 2; j < s[i].size(); j++)
            code_map[s[i][j]] = s[i][j - 2];

    string str;
    while (getline(cin, str))
    {
        for (int i = 0; i < str.length(); i++)
            if (str[i] == ' ')
                cout << " ";
            else
                cout << code_map[str[i]];
        cout << endl;
    }

    return 0;
}