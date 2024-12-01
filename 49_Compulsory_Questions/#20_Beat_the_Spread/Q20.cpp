#include <iostream>
using namespace std;

/**
 * 解聯立！
 * input：S D
 * output： x y (x > y)
 * x + y = S
 * x - y = D
 * find x, y
 * -> x = (S + D) / 2
 *    y = (S - D) / 2
 * 不合理的情況： x < y, x < 0, y < 0, x or y 不是整數
**/

int main()
{
    int num; cin >> num;
    for (int i = 0; i < num; i++)
    {
        int S, D; cin >> S >> D;
        double x = (double)(S + D) / 2;
        double y = (double)(S - D) / 2;
        if (x < y || x < 0 || y < 0 || x - (int)x || y - (int)y)
            cout << "impossible" << endl;
        else
            cout << x << " " << y << endl;
    }

    return 0;
}