#include <bits/stdc++.h>

using namespace std;

/**
 * Hit：陪伴結束時間 < 會議開始時間 或 會議結束時間 < 陪伴開始時間
 * 另外寫一個函數用於將字串解析出hh mm 
**/

void sethhmm(const string& str, int& hh, int& mm) {
    hh = (str[0] - '0') * 10 + (str[1] - '0');
    mm = (str[3] - '0') * 10 + (str[4] - '0');
}

int main() {
    int t;
    cin >> t;
    for (int cases = 1; cases <= t; ++cases) {
        string start, end;
        cin >> start >> end;
        int starthh1, startmm1, endhh1, endmm1;
        sethhmm(start, starthh1, startmm1);
        sethhmm(end, endhh1, endmm1);
        int start1 = starthh1 * 60 + startmm1;
        int end1 = endhh1 * 60 + endmm1;

        int starthh2, startmm2, endhh2, endmm2;
        cin >> start >> end;
        sethhmm(start, starthh2, startmm2);
        sethhmm(end, endhh2, endmm2);
        int start2 = starthh2 * 60 + startmm2;
        int end2 = endhh2 * 60 + endmm2;

        if (end1 < start2 || end2 < start1) {
            cout << "Case " << cases << ": " << "Hits Meeting" << endl;
        }
        else {
            cout << "Case " << cases << ": " << "Mrs Meeting" << endl;
        }
    }


    return 0;
}