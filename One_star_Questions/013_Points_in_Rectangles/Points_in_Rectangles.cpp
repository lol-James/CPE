#include <bits/stdc++.h>
using namespace std;

struct Rect { double x1, y1, x2, y2; };
Rect rect[11];

int main()
{
    char r;
    int nRect = 1;
    while (cin >> r)
    {
        if (r == '*') break;
        cin >> rect[nRect].x1 >> rect[nRect].y1 >> rect[nRect].x2 >> rect[nRect].y2;
        nRect++;
    }
    nRect--;
    int nPt = 1;
    double x, y;
    while (cin >> x >> y)
    {
        if (x == 9999.9 && y == 9999.9) break;
        bool flag = false;
        for (int i = 1; i <= nRect; i++)
        {
            if (x > rect[i].x1 && x < rect[i].x2 && y < rect[i].y1 && y > rect[i].y2)
            {
                flag = true;
                cout << "Point " << nPt << " is contained in figure " << i << endl; 
            }
        }
        if (flag == false)
            cout << "Point " << nPt << " is not contained in any figure" << endl;
        nPt++;
    }

    return 0;
}