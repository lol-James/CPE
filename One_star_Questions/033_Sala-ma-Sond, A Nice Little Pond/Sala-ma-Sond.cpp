#include <bits/stdc++.h>
using namespace std;

struct position { int x, y; };

int main()
{
    int row, col, turNum, req;

    while (cin >> row >> col >> turNum >> req)
    {   
        // 記錄每隻烏龜的位置
        map<int, struct position> turtlePosition;
        // 利用巢狀map取代二維陣列可避免存取越界的問題
        map<int, map<int, int>> pool;

        // 記錄烏龜初始位置
        struct position pos[turNum];
        for (int i = 0; i < turNum; i++)
        {
            int turId, x, y;
            cin >> turId >> x >> y;
            pos[i].x = x;
            pos[i].y = y;
            turtlePosition[turId] = pos[i];
            pool[x][y] = turId;
        }

        // 移動烏龜並測試其合法性
        for (int i = 0; i < req; i++)
        {
            int turId, x, y;
            string dir;
            cin >> turId >> dir;
            x = turtlePosition[turId].x;
            y = turtlePosition[turId].y;
            pool[x][y] = 0;
            if (dir == "N")
                x--;
            else if (dir == "S")
                x++;
            else if (dir == "E")
                y++;
            else if (dir == "W")
                y--;
            else if (dir == "NE")
            {
                x--;
                y++;
            }
            else if (dir == "NW")
            {
                x--;
                y--;
            }
            else if (dir == "SE")
            {
                x++;
                y++;
            }
            else if (dir == "SW")
            {
                x++;
                y--;
            }

            if (x >= 0 && y >= 0 && x < row && y < col && pool[x][y] == 0)
            {
                turtlePosition[turId].x = x;
                turtlePosition[turId].y = y;
                pool[x][y] = turId;
            }
            else
                pool[turtlePosition[turId].x][turtlePosition[turId].y] = turId;
        }

        // 處理每行的結尾都不可以有多餘的空格
        // 記錄每一列(row)的最後一隻烏龜出現在第幾行
        map<int, int> rowMax;
        for (int i = 0; i < row; i++)
        {
            int j;
            for (j = col - 1; j >= 0 && pool[i][j] == 0; j--);
            rowMax[i] = j;
        }

        // print
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j <= rowMax[i]; j++)
            {
                if (pool[i][j]) cout << '*';
                else cout << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
