#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, r;
    while (cin >> n >> r) {
        vector<bool> v(n + 1, false);
        for (int i = 0; i < r; i++) {
            int id;
            cin >> id;
            v[id] = true;
        }
        
        if (n == r) {
            cout << "*" << endl;
            continue;
        }
        
        for (int i = 1; i < v.size(); i++) {
            if (v[i] == false) {
                cout << i << " ";
            }
        }
        cout << endl;
    }


    return 0;
}