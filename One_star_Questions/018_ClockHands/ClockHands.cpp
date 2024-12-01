#include <bits/stdc++.h>
using namespace std;

// 角度取較小的角度

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "0:00") break;
        int h =0, m = 0;
        int colon = find(s.begin(), s.end(), ':') - s.begin();
        for (int i = 0; i < colon; i++)
        {
            h *= 10;
            h += s[i] - '0';
        }
        for (int i = colon + 1; i < s.size(); i++)
        {
            m *= 10;
            m += s[i] - '0';
        }
        double angle_h = 30.0 * h + 0.5 * m;
        double angle_m = 6.0 * m;
        cout << fixed << setprecision(3) 
            << min(abs(angle_h - angle_m), 360 - abs(angle_h - angle_m)) << endl;
    }

    return 0;
}