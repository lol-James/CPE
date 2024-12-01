#include <bits/stdc++.h>
using namespace std;

// 注意輸出格式

int main()
{
    string s;
    while (cin >> s)
    {
        if (s[0] == '-') break;
        if (s[1] == 'x')
            cout << dec << stoi(s, 0, 16) << endl;
        else
            cout << "0x" << hex << uppercase << stoi(s) << endl;
    }

    return 0;
}