#include <bits/stdc++.h>
using namespace std;

const int dxdy[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

// return true if a win
inline bool win(char a, char b)
{
    if (a == 'R')
    {
        if (b == 'S') return true;
        return false;
    }
    if (a == 'P')
    {
        if (b == 'R') return true;
        return false;
    }
    if (a == 'S')
    {
        if (b == 'P') return true;
        return false;
    }
}

int main()
{
    int t, r, c, n;
    cin >> t;
    while (t--)
    {
        cin >> r >> c >> n;
        // 使用二維vector
        vector<vector<char> > maps(r, vector<char>(c));
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> maps[i][j];

        for (int d = 0; d < n; d++)
        {   
            vector<vector<char> > temp(maps);
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    for (int k = 0; k < 4; k++)
                    {
                        int otherX = i + dxdy[k][0], otherY = j + dxdy[k][1];
                        if (otherX >= 0 && otherX < r && otherY >= 0 && otherY < c)
                            if (win(temp[i][j], temp[otherX][otherY]))
                                maps[otherX][otherY] = temp[i][j];
                    }
                }
            } 
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                cout << maps[i][j];
            cout << endl;
        } 
        if (t) cout << endl;
    }

    return 0;
}