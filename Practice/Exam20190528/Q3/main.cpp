#include <bits/stdc++.h>
using namespace std;

/**
 * 1 min = 60 deg
 * arc(弧長) = 2 * M_PI * R * (a / 360)     // 取較短的弧
 * chord(弦長) = 2 * R * cos((90 - a / 2) / 180 * M_PI))
 * 取到小數點後6位
**/

int main()
{
    double s, a, arc, chord;
    const double r = 6440.0;
    string str;
    while (cin >> s >> a >> str)
    {
        if (str == "deg" && a > 180)
            a = 360 - a;
        else if (str == "min")
            a /= 60.0;
        arc = (2.0 * M_PI * (r + s)) * (a / 360.0);
        chord = 2.0 * (r + s) * cos((90.0 - a / 2.0) / 180.0 * M_PI);
        printf("%6f %6f\n", arc, chord);
    }

    return 0;
}


