#include <bits/stdc++.h>

using namespace std;

/**
 * (1)Spot s歲時，Puff出生
 * (2)Puff p歲時，Yertle出生
 * (3)Spot y歲時，Yertle出生
 * (4)Dick(12) + Jane(j) = Spot + Puff + Yertle
 * 由(1)(2)(3)可知大小順序： Spot > Puff > Yertle
 * 從Yertle的歲數回推
**/

int main()
{
    int s, p, y, j;
    while (cin >> s >> p >> y >> j)
    {
        int yertle = (j + 12 - y - p) / 3;
        int puff = (j + 12 - s - yertle) / 2;
        int spot = (j + 12 - puff - yertle);
        cout << spot << " " << puff << " " << yertle << endl;
    }

    return 0;
}