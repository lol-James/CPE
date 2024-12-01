#include <bits/stdc++.h>

using namespace std;

struct Guard {  // x1, y1: 左下，x2, y2: 右上
    int x1, y1, x2, y2;
};

int main() {
    int n;
    cin >> n;
    for (int cases = 1; cases <= n; ++cases) {
        Guard g1, g2;
        cin >> g1.x1 >> g1.y1 >> g1.x2 >> g1.y2;
        cin >> g2.x1 >> g2.y1 >> g2.x2 >> g2.y2;
        int strong = 0;
        int strongWidth = min(g1.x2, g2.x2) - max(g1.x1, g2.x1);
        int strongLength = min(g1.y2, g2.y2) - max(g1.y1, g2.y1);
        if (strongWidth > 0 && strongLength > 0) {
            strong = strongWidth * strongLength;
        }
        int weak = (g1.x2 - g1.x1) * (g1.y2 - g1.y1) + 
                   (g2.x2 - g2.x1) * (g2.y2 - g2.y1) - 
                   (2 * strong);
        cout << "Night " << cases << ": " << strong << " " << weak << " "  << 10000 - strong - weak << endl;
    }


    return 0;
}