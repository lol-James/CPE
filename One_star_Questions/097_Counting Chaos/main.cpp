#include <bits/stdc++.h>

using namespace std;

/**
 * 直接用數字/ and %來判斷是否為回文即可
*/

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int minute = (s[0] - '0') * 600 + (s[1] - '0') * 60 + (s[3] - '0') * 10 + (s[4] - '0');
        int hh, mm;
        while (true) {
            minute++;
            if (minute >= 60 * 24) {
                minute = 0;
            }
            hh = minute / 60;
            mm = minute % 60;
            if (hh == 0) {
                if (mm < 10 || (mm / 10 == mm % 10)) break;
            }
            else if (hh < 10) {
                if (hh == mm % 10) break;
            }
            else if (hh >= 10) {
                if (hh / 10 == mm % 10 && hh % 10 == mm / 10) break;
            }
        }

        cout << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << endl;  
    }


    return 0;
}