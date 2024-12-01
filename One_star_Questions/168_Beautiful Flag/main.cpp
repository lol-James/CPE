#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cases = 1; cases <= t; ++cases) {
        double r;
        cin >> r;
        cout << "Case " << cases << ":" << endl;
        double X = r * 5.0;
        double Y = r * 3.0;
        double x1 = -1 * X * 0.45;
        double y1 = Y * 0.5;
        double x2 = X * 0.55;
        double y2 = Y * 0.5;
        double x3 = x2;
        double y3 = -1 * y2;
        double x4 = x1;
        double y4 = -1 * y1;
        cout << x1 << " " << y1 << endl;
        cout << x2 << " " << y2 << endl;
        cout << x3 << " " << y3 << endl;
        cout << x4 << " " << y4 << endl;
    }

    return 0;
}