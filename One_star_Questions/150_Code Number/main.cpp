#include <bits/stdc++.h>

using namespace std;

/**
 * 注意空行！
*/

int main() {
    map<char, char> mp;
    mp['0'] = 'O';
    mp['1'] = 'I';
    mp['2'] = 'Z';
    mp['3'] = 'E';
    mp['4'] = 'A';
    mp['5'] = 'S';
    mp['6'] = 'G';
    mp['7'] = 'T';
    mp['8'] = 'B';
    mp['9'] = 'P';

    int n;
    cin >> n;
    cin.ignore();
    bool isFirst = true;    
    while (n--) {
        if (!isFirst) cout << endl;

        string str;
        while (getline(cin, str)) {
            if (str.empty()) break;
            for (auto ch : str) {
                if (mp.count(ch)) {
                    cout << mp[ch];
                }
                else {
                    cout << ch;
                }
            }
            cout << endl;
        }
        
        isFirst = false;
    }

    return 0;
}