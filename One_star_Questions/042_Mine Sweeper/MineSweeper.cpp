#include <bits/stdc++.h>
using namespace std;

// 陣列多開一格以防萬一
char maps[11][11], show[11][11];
int number[11][11];     // 用於統計四周的地雷數量
const int dxdy[8][2] = {{1, 0}, {0, 1}, 
                        {-1, 0}, {0, -1}, 
                        {1, -1}, {-1, 1}, 
                        {1, 1}, {-1, -1}};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {   
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> maps[i];
        for (int i = 0; i < n; i++) cin >> show[i];

        memset(number, 0, sizeof(number));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (maps[i][j] == '*')
                {
                    for (int k = 0; k < 8; k++)
                    {
                        int x = i + dxdy[k][0];
                        int y = j + dxdy[k][1];
                        if (x >= 0 && x < n && y >= 0 && y < n) number[x][y]++;
                    }
                }
            }
        }
        
        bool gameOver = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (show[i][j] == 'x' && maps[i][j] == '*')
                {
                    gameOver = true;
                    break;
                }
            }
            if (gameOver) break;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (gameOver)
                {
                    if (maps[i][j] == '*') cout << "*";
                    else if (show[i][j] == 'x') cout << number[i][j];
                    else if (show[i][j] == '.') cout << ".";
                }
                else
                {
                    if (show[i][j] == 'x') cout << number[i][j];
                    else if (show[i][j] == '.') cout << ".";
                }
            }
            cout << endl;
        }
        if (T) cout << endl;
    }

    return 0;
}