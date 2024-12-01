#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int cases = 1; cases <= n; ++cases) {
        cout << "Case " << cases << ": ";
        
        string s;
        cin >> s;
        int num = 0;
        char ch = '\0'; // \0為空字元
        for (int i = 0; i < s.size(); ++i) {
            if (isalpha(s[i])) {
                for (int j = 0; j < num; ++j) {
                    cout << ch;
                }
                ch = s[i];
                num = 0;
            }
            else {
                num = num * 10 + (s[i] - '0');
            }
        }
        while (num--) cout << ch;   // 最後一個字元會沒算到
        cout << endl;
    }


    return 0;
}