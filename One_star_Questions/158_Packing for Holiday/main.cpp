#include <bits/stdc++.h>

using namespace std;

/**
 * 判斷輸入的長寬高是否皆<=20
*/

int main() {
    int t;
    cin >> t;
    for (int cases = 1; cases <= t; ++cases) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a <= 20 && b <= 20 && c <= 20) {
            cout << "Case " << cases << ": good" << endl;
        }
        else {
            cout << "Case " << cases << ": bad" << endl;
        }
    }

    return 0;
}