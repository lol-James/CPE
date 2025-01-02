#include <bits/stdc++.h>

using namespace std;

/**
 * 不管怎麼加密 字母與字母對應的數量必然一致
*/

int main() {
    string s1, s2;
    while (cin >> s1 >> s2) {
        int a[26] = {0}, b[26] = {0};
        for (int i = 0; i < s1.size(); i++) {
            a[s1[i] - 'A']++;
            b[s2[i] - 'A']++;
        }
        sort(a, a + 26);
        sort(b, b + 26);
        bool flag = true;
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) {
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}