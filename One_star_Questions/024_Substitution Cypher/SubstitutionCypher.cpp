#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s;
    int T;
    cin >> T;
    getline(cin, s);
    getline(cin, s);
    while (T--)
    {
        getline(cin, s1);
        getline(cin, s2);
        map<char, char> mp;
        for (int i = 0; i < s1.size(); i++) mp[s1[i]] = s2[i];
        cout << s2 << endl;
        cout << s1 << endl;
        while (getline(cin, s))
        {
            if (s == "") break;
            for (int i = 0; i < s.size(); i++)
                if (mp.count(s[i])) cout << mp[s[i]];
                else cout << s[i];
            cout << endl;
        }
        if (T) cout << endl;
    }

    return 0;
}