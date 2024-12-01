#include <bits/stdc++.h>
using namespace std;

/**
 * R = r1 + r2
 * (t/2)^2 = 2r1 * 2r2 = 4 * r1 * r2
 * t^2 = 16 * r1 * r2
 * A = M_PI * R^2 - M_PI * r1^2 - M_PI * r2^2
 *   = 2 * r1 * r2 * M_PI
 *   = M_PI * t^2 / 8 
**/

int main()
{
    int n;
    double a, b;
    cin >> n;
    string str;
    getline(cin, str);  // erase '\n'
    while (n--)
    {
        getline(cin, str);
        if (sscanf(str.c_str(), "%lf %lf", &a, &b) == 1)
        {
            if (a >= 0)
                printf("%.4lf\n", M_PI * a * a / 8);
            else
                printf("Impossible.\n");
        }
        else
        {   
            if (a >= 0 && b >= 0)
                printf("%.4lf\n", M_PI * a * b * 2.0);
            else
                printf("Impossible.\n");
        }
    }

    return 0;
}