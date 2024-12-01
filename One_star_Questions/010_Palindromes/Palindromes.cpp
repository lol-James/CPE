#include <bits/stdc++.h>
using namespace std;

/**
 * 使用map處理鏡像字元對應關係
 * 判斷鏡像時，若字串長度為奇數，還需判斷最中間的字是否為鏡像字符(？
**/

unordered_map<char, char> mp;
string s;

bool isPalindrome()
{
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - i - 1]) return false;
    return true;
}

bool isMirror()
{
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
        if (mp[s[i]] != s[len - i - 1]) return false;
    if (len % 2 != 0 && mp[s[len / 2]] == '\0') return false;
    return true;
}

int main()
{
    string s1, s2;
    s1 = "AEHIJLMOSTUVWXYZ012358";
    s2 = "A3HILJMO2TUVWXY501SEZ8";
    for (int i = 0; i < s1.size(); i++) mp[s1[i]] = s2[i];
    while (cin >> s)
    {
        bool flag1 = isPalindrome();
        bool flag2 = isMirror();
        if (flag1 && flag2)
            cout << s << " -- is a mirrored palindrome.\n\n";
        else if (flag1)
            cout << s << " -- is a regular palindrome.\n\n";
        else if (flag2)
            cout << s << " -- is a mirrored string.\n\n";
        else
            cout << s << " -- is not a palindrome.\n\n";
    }

    return 0;
}