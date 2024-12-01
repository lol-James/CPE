#include <bits/stdc++.h>

using namespace std;

int main() {
    int total, cases = 0;
    while (cin >> total) {
        if (total < 0) break;
        int a[12], b[12];
        for (int i = 0; i < 12; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < 12; i++) {
            cin >> b[i];
        }
        cout << "Case " << ++cases << ":\n";
        for (int i = 0; i < 12; i++) {
            if (b[i] <= total) {
                cout << "No problem! :D\n";
                total -= b[i];
            } 
            else {
                cout << "No problem. :(\n";
            }
            total += a[i];
        }
    }


    return 0;
}