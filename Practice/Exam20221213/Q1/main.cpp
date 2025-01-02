#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
        vector<int> v;
        while (n) {
            v.push_back(n % 2);
            n /= 2;
        }
        int count = 0;
        reverse(v.begin(), v.end());
        cout << "The parity of ";
        for (auto i : v) {
            if (i == 1) count++;
            cout << i;
        }
        cout << " is " << count << " (mod 2)." << endl;
    }

    return 0;
}