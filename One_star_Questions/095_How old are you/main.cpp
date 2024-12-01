#include <bits/stdc++.h>

using namespace std;

/**
 * 日期算個大概就好，不需管大小月，閏月
 * 一個月當做31天，一年當做372天
**/

int str2int(const string& str, int start, int len) {
    int result = 0;
    for (int i = start; i < start + len; i++) {
        result *= 10;
        result += str[i] - '0';    
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    for (int cases = 1; cases <= t; cases++) {
        string s1, s2;
        cin >> s1 >> s2;
        int dd1 = str2int(s1, 0, 2) + 31 * str2int(s1, 3, 2) + 372 * str2int(s1, 6, 4);
        int dd2 = str2int(s2, 0, 2) + 31 * str2int(s2, 3, 2) + 372 * str2int(s2, 6, 4);
        if (dd1 < dd2) cout << "Case #" << cases << ": Invalid birth date\n";
        else if ((dd1 - dd2) / 372 > 130) cout << "Case #" << cases << ": Check birth date\n";
        else cout << "Case #" << cases << ": " << (dd1-dd2) / 372 << endl;
    }

    return 0;
}