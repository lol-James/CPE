#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();   // 去除/n
    while (t--) {
        string s;
        getline(cin, s);
        int sq = (int)sqrt(s.length());
        if (sq * sq != s.length()) {
            cout << "INVALID" << endl;
            continue;
        }        
        else {
            for (int col = 0; col < sq; col++) {
                for (int row = 0; row < sq; row++) {
                    cout << s[row * sq + col];
                }
            }
            cout << endl;
        }
    }


    return 0;
}