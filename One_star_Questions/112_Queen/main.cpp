#include <bits/stdc++.h>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2) {
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) break;
        
        if (x1 == x2 && y1 == y2) cout << "0\n";
        else if (x1 == x2 || y1 == y2 || abs((x1 - x2)/(y1 - y2)) == 1) cout << "1\n";
        else cout << "2\n";
    }

    return 0;
}