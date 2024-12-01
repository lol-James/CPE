#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, string> mp;
    string s, key, value;
    stringstream ss;
    while (getline(cin, s))
    {
        if (s == "") break;
        ss.clear();
        ss << s;
        ss >> value >> key;
        mp[key] = value;
    }
    while (getline(cin, s))
    {
        if (mp.count(s))
            cout << mp[s] << endl;
        else
            cout << "eh" << endl;
    }

    return 0;
}