#include <bits/stdc++.h>
using namespace std;

bool maps[505][505];

int main()
{
    int w, h, n;
    while (cin >> w >> h >> n)
    {
        if (w == 0 && h == 0 && n == 0) break;
        memset(maps, true, sizeof(maps));
        int x1, y1, x2, y2;
        while (n--)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 > x2) swap(x1, x2);
            if (y1 > y2) swap(y1, y2);

            for (int i = x1; i <= x2; i++)
                for (int j = y1; j <= y2; j++)
                    maps[i][j] = false;
        }
        int ans = 0;
        for (int i = 1; i <= w; i++)
            for (int j = 1; j <= h; j++)
                if (maps[i][j] == true) ans++;

        if (ans == 0)
            printf("There is no empty spots.\n");
        else if (ans == 1)
            printf("There is one empty spot.\n");
        else 
            printf("There are %d empty spots.\n", ans); 
    }

    return 0;
}