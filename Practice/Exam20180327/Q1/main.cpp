#include <bits/stdc++.h>

using namespace std;

inline void printWave(int a) {
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
    for (int i = a - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

int main() {
    int t; cin >> t;
    bool isFirst = true;
    while (t--) {
        if (isFirst == false) cout << endl;
        isFirst = false;
        int a, f; cin >> a >> f;
        for (int i = 0; i < f; i++) {
            if (i != 0) cout << endl;
            printWave(a);
        }
    }

    
    return 0;
}