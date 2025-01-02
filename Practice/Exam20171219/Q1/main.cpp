#include <bits/stdc++.h>

using namespace std;

inline int getNextNum(int n) {
    int res = 0;
    while (n) {
        res += (n % 10) * (n % 10);
        n /= 10;
    }
    return res;
}

int main() {
    int t; cin >> t;
    for (int cases = 1; cases <= t; ++cases) {
        int n; cin >> n;
        int temp = n;
        set<int> st;
        while (temp != 1 && st.find(temp) == st.end()) {
            st.insert(temp);
            temp = getNextNum(temp);
        }
        cout << "Case #" << cases << ": ";
        if (temp == 1) cout << n << " is a Happy number." << endl;
        else cout << n << " is an Unhappy number." << endl;
    }


    return 0;
}