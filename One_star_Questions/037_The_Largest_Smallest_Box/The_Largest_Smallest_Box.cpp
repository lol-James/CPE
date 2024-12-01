#include <bits/stdc++.h>
using namespace std;

const double delta = 1e-8;  // 浮點數精度控制

int main()
{
    double L, W, xMax;
    while (cin >> L >> W)
    {
        xMax = (L + W - sqrt(L * L + W * W - L * W)) / 6.0;
        cout << fixed << setprecision(3)
            << xMax + delta << " " << 0.0 << " " << min(W, L) / 2.0 + delta << endl;
    }

    return 0;
}