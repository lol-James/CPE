#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b;
    while (cin >> a >> b) {
        vector<long long> v;
        if (a == 0 || b == 0 || a < b || b == 1) {
            cout << "Boring!\n";
            continue;
        }

        v.push_back(a);
        while (a % b == 0 && a != 0) {
            v.push_back(a / b);
            a /= b;
        }

        if (a != 1) {
            cout << "Boring!\n";
        }
        else {
            for (int i = 0; i < v.size(); i++) {
                cout << v[i];
                if (i != v.size() - 1) cout << " ";
            }
            cout << endl;
        }
    }



    return 0;
}