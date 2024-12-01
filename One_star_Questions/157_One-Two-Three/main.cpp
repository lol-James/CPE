#include <bits/stdc++.h>

using namespace std;

/**
 * 給一個字串，其與one two three其中一個字最多只會有一個字不同
 * 輸出相似的字是one two three哪一個
**/

bool isSimilar(const string& a, const string& b) {
    int count = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) count++;
    }

    return count <= 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.size() == 5) cout << 3 << endl;
        else {
            if (isSimilar(s, "one")) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }


    return 0;
}