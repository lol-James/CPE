#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int cases = 1; cases <= n; ++cases) {
        int t;
        cin >> t;
        int curr = 0, high = 0, low = 0;
        for (int i = 0; i < t; ++i) {
            int h;
            cin >> h;
            if (curr != 0) {
                if (h > curr) high++;
                else if (h < curr) low++;
            }
            curr = h;
        }

        cout << "Case " << cases << ": " << high << " " << low << endl;
    }


    return 0;
}