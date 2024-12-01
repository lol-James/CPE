#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            string s;
            getline(cin, s);
            if (s == "LEFT") a[i] = -1;
            else if (s == "RIGHT") a[i] = 1;
            // SAME AS指令的index8開始才是數字部分
            else a[i] = a[stoi(s.substr(8)) - 1];
        }
        int ans = 0;
        for (int i = 0; i < n; i++) 
            ans += a[i];
        cout << ans << endl;
    }

    return 0;
}