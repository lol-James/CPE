#include <bits/stdc++.h>

using namespace std;

int main() {
    int h1, m1, h2, m2;
    while (cin >> h1 >> m1 >> h2 >> m2) {
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;
        int mm1 = h1 * 60 + m1;
        int mm2 = h2 * 60 + m2;
        if (mm2 <= mm1) mm2 += 24 * 60;
        cout << mm2 - mm1 << endl;
    }

    return 0;
}