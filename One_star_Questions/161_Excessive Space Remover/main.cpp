#include <bits/stdc++.h>

using namespace std;

/**
 * 一次操作可以將字串內所有2個連續空白都換成一個空白
 * 問最少需要幾次操作？
 * 找出最長的連續空白有幾個空白
 * 取ceil(log2(n))
*/

int main() {
    string s;
    while (getline(cin, s)) {
        int mx = 0, count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') count++;
            else {
                mx = max(mx, count);
                count = 0;
            }
        }
        cout << (int)ceil(log2(mx)) << endl;
    }

    return 0;
}