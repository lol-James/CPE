#include <bits/stdc++.h>

using namespace std;

/**
 * 難在空行的部分
*/

int main() {
    int t; cin >> t;
    string s;
    cin.ignore();   
    for (int cases = 1; cases <= t; ++cases) {
        if (cases == 1) cin.ignore();
        if (cases != 1) cout << endl;
        cout << "Case #" << cases << ":" << endl;
        while (getline(cin, s)) {
            if (s == "") break;
            stringstream ss(s);
            string word = "";
            int i = 0;
            while (ss >> word) {
                if (i < word.length()) cout << word[i++];
            }
            cout << endl;
        }
    }

    return 0;
}