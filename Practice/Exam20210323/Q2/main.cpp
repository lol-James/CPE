#include <bits/stdc++.h>

using namespace std;

int main() {
    map<char, int> mp;
    mp['A'] = 2; mp['B'] = 2; mp['C'] = 2;
    mp['D'] = 3; mp['E'] = 3; mp['F'] = 3;
    mp['G'] = 4; mp['H'] = 4; mp['I'] = 4;
    mp['J'] = 5; mp['K'] = 5; mp['L'] = 5;
    mp['M'] = 6; mp['N'] = 6; mp['O'] = 6;
    mp['P'] = 7; mp['Q'] = 7; mp['R'] = 7; mp['S'] = 7;
    mp['T'] = 8; mp['U'] = 8; mp['V'] = 8;
    mp['W'] = 9; mp['X'] = 9; mp['Y'] = 9; mp['Z'] = 9;

    string s;
    while (getline(cin, s)) {
        int count1 = 0, count2 = 0;
        for (auto& ch : s) {
            if (isdigit(ch)) {
                cout << ch;
            }
            else if (isalpha(ch)) {
                count1++;
                cout << mp[ch];
            }
            else {
                count2++;
                cout << ch;
            }
        }
        cout << " " << count1 << " " << count2 << endl;
    }


    return 0;
}