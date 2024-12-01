#include <bits/stdc++.h>
using namespace std;

/**
 * bingo卡記錄方法：將叫到的數字在陣列(bingo卡上設為0作註記
**/

int a[5][5];

bool isBingo();

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        map<int, pair<int, int> > mp;
        // 用來存數字Bingo卡上數字各自對應的index
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == 2 && j == 2)
                {
                    a[2][2] = 0;
                    continue;
                }
                cin >> a[i][j];
                mp[a[i][j]] = make_pair(i, j);
            }
        }
        vector<int> v(75);
        for (int i = 0; i < 75; i++) cin >> v[i];
        for (int i = 0; i < 75; i++)
        {
            if (mp.count(v[i]))
            {
                auto index_pair = mp[v[i]];
                a[index_pair.first][index_pair.second] = 0;
                if (isBingo())
                {
                    cout << "BINGO after " << i + 1 << " numbers announced\n";
                    break;
                }
            }
        }
    }

    return 0;
}

bool isBingo()
{   
    int sum;

    for (int i = 0; i < 5; i++)
    {
        sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += a[i][j];
        }
        if (sum == 0) return true;
    }

    for (int i = 0; i < 5; i++)
    {
        sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += a[j][i];
        }
        if (sum == 0) return true;
    }

    sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i][i];
    }
    if (sum == 0) return true;

    sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i][4 - i];
    }
    if (sum == 0) return true;

    return false;
}