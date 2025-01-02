#include <bits/stdc++.h>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        double X1, Y1, X2, Y2, X3, Y3, X4, Y4;
        // 調整過的坐標編號，(X2, Y2)為共用點
        if (x1 == x3 && y1 == y3)
        {
            X1 = x2;
            Y1 = y2;
            X2 = x1;
            Y2 = y1;
            X3 = x4;
            Y3 = y4;
        }
        else if (x1 == x4 && y1 == y4)
        {
            X1 = x2;
            Y1 = y2;
            X2 = x1;
            Y2 = y1;
            X3 = x3;
            Y3 = y3;
        }
        else if (x2 == x3 && y2 == y3)
        {
            X1 = x1;
            Y1 = y1;
            X2 = x2;
            Y2 = y2;
            X3 = x4;
            Y3 = y4;
        }
        else if (x2 == x4 && y2 == y4)
        {
            X1 = x1;
            Y1 = y1;
            X2 = x2;
            Y2 = y2;
            X3 = x3;
            Y3 = y3;
        }

        X4 = X1 + X3 - X2;
        Y4 = Y1 + Y3 - Y2;
        printf("%.3f %.3f\n", X4, Y4);
    } 

    return 0;
}