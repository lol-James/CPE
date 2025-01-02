#include <bits/stdc++.h>

using namespace std;

int main() {
    string s[] = {"`1234567890-=", "qwertyuiop[]\\", "asdfghjkl;'", "zxcvbnm,./"};
    map<char, char> code_map;
    for (int i = 0; i < 4; i++)
        for (int j = 2; j < s[i].size(); j++)
            code_map[s[i][j]] = s[i][j - 2];

    string str;
    while (getline(cin, str)) {
        for (int i = 0; i < str.length(); i++)
            cout << ((str[i] == ' ') ? ' ' : code_map[str[i]]); 
        cout << endl;
    }

    return 0;
}