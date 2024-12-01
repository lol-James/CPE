#include <bits/stdc++.h>
using namespace std;

/**
 * 1) 讀一個數N
 * 2) 將N視為十進制數，轉為二進制並統計出1的個數b1
 * 3) 將N視為16進制數，轉為二進制並統計出1的個數b2
 * 4) 輸出b1 b2
**/

int main()
{
    int n, M, b1, b2, x;
    while (cin >> n)
    {
        while (n--)
        {   
            b1 = b2 = 0;
            cin >> M;
            // 求出b1
            x = M;
            vector<int> v;
            while (x)
            {
                v.push_back(x % 2);
                x /= 2;
            }
            for (auto i : v) if (i) b1++;
            // 求出b2
            x = M;
            while (x)
            {
                switch (x % 10)
                {
                case 0:
                    break;
                case 1: case 2: case 4: case 8:
                    b2 += 1;
                    break;
                case 3: case 5: case 6: case 9: case 10: case 12:
                    b2 += 2;
                    break;
                case 15:
                    b2 += 4;
                    break;
                default:
                    b2 += 3;
                    break;
                }
                x /= 10;
            }
            cout << b1 << " " << b2 << endl;
        }
    }

    return 0;
}
