#include <iostream>
using namespace std;

/**
 * 給定一個字元矩形,找出最大正方形的邊的長度
 * 在其中正方形內的所有字元皆相同
 * 並且正方形的中心(兩個對角線的交點)為(ir, ic)
 * 矩形的高度和寬度分別為m n。
 * 矩形的左上角座標為(0, 0)，右下角座標為(M-1, N-1)。
**/

int main()
{
    int t, m, n, q, ir, ic;
    bool flag;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> m >> n >> q;
        char rect[m][n];
        for (int j = 0; j < m; j++)
            for (int k = 0; k < n; k++)
                cin >> rect[j][k];
        cout << m << " " << n << " " << q << endl;
        for (int j = 0; j < q; j++)
        {
            cin >> ir >> ic;
            char ch = rect[ir][ic];
            int l = 0; // 與(ir, ic)距離
            while (ir - l >= 0 && ic - l >= 0 && ir + l < m && ic + l < n)
            {
                flag = true;
                // left
                for (int k = ir - l; k <= ir + l; k++)
                    if (rect[k][ic - l] != ch)
                    {
                        flag = false;
                        break;
                    }
                // right
                for (int k = ir - l; k <= ir + l; k++)
                    if (rect[k][ic + l] != ch)
                    {
                        flag = false;
                        break;
                    }
                // up
                for (int k = ic - l; k <= ic + l; k++)
                    if (rect[ir - l][k] != ch)
                    {
                        flag = false;
                        break;
                    }
                // down
                for (int k = ic - l; k <= ic + l; k++)
                    if (rect[ir + l][k] != ch)
                    {
                        flag = false;
                        break;
                    }
                if (flag == false)
                    break;
                l++;
            }
            cout << 2 * (l - 1) + 1 << endl;
        }
    }

    return 0;
}