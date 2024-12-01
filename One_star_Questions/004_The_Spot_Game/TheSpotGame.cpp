#include <bits/stdc++.h>
using namespace std;

/**
 * The Spot Game在一塊 NxN 的板子上進行
 * 遊戲的玩法是兩個玩家輪流放一塊石頭在空的格子上，或是可以從板子上拿一塊石頭起來
 * 當一玩家排出已重複出現過的佈局時，他就算輸了這一局(一種佈局如果將之旋轉90度、180度、270度亦視為相同的佈局)
**/

int n;
char grid[55][55];
set<string> vis;

bool try_to_insert();

int main()
{
    while (cin >> n)
    {   
        if (n == 0) break;
        bool flag = true;
        int winner, num;
        int i, x, y;
        char ch;
        vis.clear();
        memset(grid, '0', sizeof(grid));
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> x >> y >> ch;
            if (flag == false) continue;    // 資料仍要讀完，所以要用continue而不是break
            if (ch == '+') grid[x - 1][y - 1] = '1';
            else if (ch == '-') grid[x - 1][y - 1] = '0';
            if (try_to_insert() == false)
            {
                flag = false;
                num = i + 1;
                if (i % 2 == 0) winner = 2;
                else winner = 1;
                cout << "Player " << winner << " wins on move " << num << endl;
            }
        }
        if (flag) cout << "Draw" << endl;
    }

    return 0;
}

bool try_to_insert()
{
    string str = "";
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            str += grid[i][j];
    if (vis.count(str)) return false;   // 找到相同佈局

    vis.insert(str);                    // 記錄新佈局(未旋轉)

    str = "";
    for (i = 0; i < n; i++)             // 記錄逆時針轉90°的佈局
        for (j = n - 1; j <= 0; j--)
            str += grid[i][j];
    if (vis.count(str) == false) vis.insert(str);

    str = "";                           // 記錄逆時針轉180°的佈局
    for (i = n - 1; i >= 0; i--)
        for (j = n - 1; j >= 0; j--)
            str += grid[i][j];
    if (vis.count(str) == false) vis.insert(str);

    str = "";
    for (i = n - 1; i <= 0; i--)        // 記錄逆時針轉270°的佈局
        for (j = 0; j < n; j++)
            str += grid[i][j];
    if (vis.count(str) == false) vis.insert(str);
    
    return true;
}
