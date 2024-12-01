#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();   // 去除/n
    for (int cases = 1; cases <= n; ++cases) {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        if (s1 == s2) {
            cout << "Case " << cases << ": " << "Yes" << endl;
            continue;
        }
        else {
            string s = "";
            for (int i = 0; i < s1.size(); ++i) {
                if (s1[i] != ' ') {
                    s += s1[i];
                }
            }
            if (s == s2) {
                cout << "Case " << cases << ": " << "Output Format Error" << endl;
            }
            else {
                cout << "Case " << cases << ": " << "Wrong Answer" << endl;
            }
        }
    }


    return 0;
}