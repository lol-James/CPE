#include <bits/stdc++.h>

using namespace std;

inline int getdoubleSum(const char ch) {
    int n = ch - '0';
    n = n * 2;
    n = n / 10 + n % 10;
    return n;
}

int main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s; getline(cin, s);
        int a[8] = {0}, b[8] = {0};
        a[0] = getdoubleSum(s[0]);
        a[1] = getdoubleSum(s[2]);
        a[2] = getdoubleSum(s[5]);
        a[3] = getdoubleSum(s[7]);
        a[4] = getdoubleSum(s[10]);
        a[5] = getdoubleSum(s[12]);
        a[6] = getdoubleSum(s[15]);
        a[7] = getdoubleSum(s[17]);
        int sum = 0; for (int i = 0; i < 8; i++) sum += a[i];
        b[0] = s[1] - '0';
        b[1] = s[3] - '0';
        b[2] = s[6] - '0';
        b[3] = s[8] - '0';
        b[4] = s[11] - '0';
        b[5] = s[13] - '0';
        b[6] = s[16] - '0';
        b[7] = s[18] - '0';
        for (int i = 0; i < 8; i++) sum += b[i];
        if (sum % 10 == 0) cout << "Valid" << endl;
        else cout << "Invalid" << endl;
    }


    return 0;
}