#include <bits/stdc++.h>
using namespace std;


int main()
{
    string charStr = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    map<char, char> mp;
    for (int i = 1; i < charStr.size(); i++) mp[charStr[i]] = charStr[i - 1];
    string s;
    while (getline(cin, s))
    {   
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ') cout << " ";
            else cout << mp[s[i]];
        }
        cout << endl;
    }

    return 0;
}