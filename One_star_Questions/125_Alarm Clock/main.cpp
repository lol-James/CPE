#include <bits/stdc++.h>

using namespace std;

int main() {
    int h1, m1, h2, m2;
    while (cin >> h1 >> m1 >> h2 >> m2) {
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;
        int minutes1 = (h1 * 60) + m1;
        int minutes2 = (h2 * 60) + m2;
        if (minutes2 < minutes1) minutes2 += 1440;
        cout << minutes2 - minutes1 << endl;
    }

    return 0;
}