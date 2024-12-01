#include <bits/stdc++.h>
using namespace std;
    
map<char, int> mp;
void initMap();

int main()
{   
    initMap();
    int f, n;
    while (cin >> f >> n)
    {
        bool finger[11];
        for (int i = 0; i < 11; i++) finger[i] = true;
        for (int i = 0; i < f; i++)
        {
            int x;
            cin >> x;
            finger[x] = false;
        }
        vector<string> strVector;
        for (int i = 0; i < n; i++)
        {   

            string s;
            cin >> s;
            bool test = true;
            for (auto &ch : s)
            {
                if (finger[mp[ch]] == false)
                {   
                    test = false;
                    break;
                }
            }
            if (test == true) strVector.push_back(s);
        }
        int maxLen = 0;
        for (auto &str : strVector) maxLen = str.size() > maxLen ? str.size() : maxLen;
        map<string, bool> strMap;
        for (auto &str : strVector) if (str.length() == maxLen) strMap[str] = true;
        cout << strMap.size() << endl;
        for (auto &pair : strMap) cout << pair.first << endl;
    }

    return 0;
}

void initMap()
{   
    mp['q'] = 1; mp['a'] = 1; mp['z'] = 1;
	mp['w'] = 2; mp['s'] = 2; mp['x'] = 2;
	mp['e'] = 3; mp['d'] = 3; mp['c'] = 3;
	mp['r'] = 4; mp['f'] = 4; mp['v'] = 4; mp['t'] = 4; mp['g'] = 4; mp['b'] = 4;
	mp['y'] = 7; mp['h'] = 7; mp['n'] = 7; mp['u'] = 7; mp['j'] = 7; mp['m'] = 7;
	mp['i'] = 8; mp['k'] = 8;
	mp['o'] = 9; mp['l'] = 9;
	mp['p'] = 10;
}