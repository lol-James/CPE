#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, r;
    while (cin >> n >> r) {
        vector<bool> v(n + 1, false);
        int num;
        while (r--) {
            cin >> num;
            v[num] = true;
        }
        bool flag = false;
        for (int i = 1; i <= n; i++) {
            if (v[i] == false) {
                cout << i << " ";
                flag = true;
            }
        }
        if (flag == false) cout << "*";
        cout << endl;
    }


    return 0;
}