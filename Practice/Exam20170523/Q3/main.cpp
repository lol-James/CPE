#include <bits/stdc++.h>
using namespace std;

/**
 * 第i個人贏的機率prob
 * prob = (q^(i-1))*p+(q^(i-1+n))*p+(q^(i-1+2n))*p+...
 * 無窮等比級數:
 * 首項:(q^(i-1))*p，公比:p^n，帶入公式
 * prob=(q^(i-1) * p)/(1-q^n)
**/

int main()
{
    int in, n, i;
    double p, q, prob;
    while (cin >> in)
    {
        for (int k = 0; k < in; k++)
        {
            cin >> n >> p >> i;
            q = 1.0 - p;
            if (q == 1)
            {
                cout << "0.0000" << endl;
            }
            else
            {
                prob = (pow(q, (i - 1)) * p) / (1 - pow(q, n));
                cout << fixed << setprecision(4) << prob << endl;
            }
        }
    }
    return 0;
}