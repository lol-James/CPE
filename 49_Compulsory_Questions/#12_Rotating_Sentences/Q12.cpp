#include <bits/stdc++.h>
using namespace std;

/**
 * 將全部文字往順時針方向旋轉90度後輸出，最多100行
 * 運用string[]存
 * 使用雙層for並控制輸出順序
**/

int main()
{
    string s[101];
    int count = 0, len, max_len = 0;
    while (getline(cin, s[count]))
    {
        len = s[count++].length();
        max_len = (max_len < len) ? len : max_len;
    }

    for (int i = 0; i < max_len; i++)
    {
        // count在跳出while loop時多加了1，故要減1才是最後一個字串的index
        for (int j = count - 1; j >= 0; j--) 
            cout << ((i < s[j].length()) ? s[j][i] : ' ');
        cout << endl;
    }

    return 0;
}