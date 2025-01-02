#include <bits/stdc++.h>

using namespace std;

inline void printAlphabet(const char ch, int times) {
    for (int i = 0; i < times; ++i) cout << ch;
}

int main() {
    int t; cin >> t;
    for (int cases = 1; cases <= t; ++cases) {
        string str; cin >> str;
        int times = 0;
        char ch;
        cout << "Case " << cases << ": ";
        for (int i = 0; i < str.length(); ++i) {
            if (i == 0) {
                ch = str[i];
            }
            else if (isdigit(str[i])) {
                times = times * 10 + (str[i] - '0');
            }
            else if (isupper(str[i])) {
                printAlphabet(ch, times);
                ch = str[i];
                times = 0;
            } 
        }
        printAlphabet(ch, times);   // 最後一個要記得處理，迴圈會漏掉
        cout << endl;
    }

    return 0;
}