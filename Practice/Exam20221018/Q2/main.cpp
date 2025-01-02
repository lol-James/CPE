#include <bits/stdc++.h>

using namespace std;

int str2int(const string& str, int start, int len) {
    int result = 0;
    for (int i = start; i < start + len; i++) 
        result = result * 10 + (str[i] - '0');
    return result;
}

int main() {
    int t; cin >> t;
    for (int cases = 1; cases <= t; cases++) {
        string s1, s2; cin >> s1 >> s2;
        int dd1 = str2int(s1, 0, 2) + 31 * str2int(s1, 3, 2) + 372 * str2int(s1, 6, 4);
        int dd2 = str2int(s2, 0, 2) + 31 * str2int(s2, 3, 2) + 372 * str2int(s2, 6, 4);
        cout << "Case #" << cases << ": ";
        if (dd1 < dd2) cout << "Invalid birth date";
        else if ((dd1 - dd2) / 372 > 130) cout << "Check birth date";
        else cout << (dd1 - dd2) / 372;
        cout << endl;
    }


    return 0;
}