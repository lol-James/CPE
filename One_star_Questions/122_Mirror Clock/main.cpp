#include <bits/stdc++.h>

using namespace std;

/**
 * 兩個鏡像時間加起來必為24:00
 * 0 < h <= 12;
*/

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int h = (s[0] - '0') * 10 + (s[1] - '0');
        int m = (s[3] - '0') * 10 + (s[4] - '0');
        int minutes = 24 * 60 - (h * 60 + m);
        h = minutes / 60;
        if (h > 12) h -= 12;
        m = minutes % 60;
        cout << setw(2) << setfill('0') << h;
        cout << ":";
        cout << setw(2) << setfill('0') << m;
        cout << endl;
    }

    return 0;
}