#include <bits/stdc++.h>
using namespace std;

/**
 * 考數學，算面積
 * let 邊長為a
 * 一塊斜線的面積為x
 * 一塊點狀的面積為y
 * 一塊格子狀的面積為z
**/

int main()
{
    double a;
    while (cin >> a)
    {
        double x, y, z;
        z = a * a - a * a * M_PI / 4;
        z -= a * a * M_PI / 4 - a * a * M_PI / 6 - (a * a * M_PI / 6 - (sqrt(3) / 4) * a * a);
        y = a * a - a * a * M_PI / 4.0 - 2 * z;
        x  = a * a - 4 * y - 4 * z;
        cout << fixed << setprecision(3) << x << " " << 4 * y << " " << 4 * z << endl;
    }

    return 0;
}