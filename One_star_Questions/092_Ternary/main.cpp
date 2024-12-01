#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n < 0) break;
        // n==0 需直接輸出一個0
        if (n == 0) {
            cout << "0\n";
            continue;
        }
        vector<int> v;
        while (n) {
            v.push_back(n % 3);
            n /= 3;
        }
        for (auto it = v.rbegin(); it != v.rend(); ++it) 
            cout << *it;
        cout << endl;
    }

    return 0;
}