#include <iostream>
using namespace std;

/**
 * A到B的步數 = O到B的步數 - O到A的步數
 * O到(x, y)的步數：
 * 上箭頭：(1+2+3+...+(x+y-1)) + x
 * 下箭頭&水平箭頭：x + y
 * total：((x + y) * ((x + y) + 1)) / 2 + x;
**/

int main()
{
    long long int x1, y1, A, x2, y2, B;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        A = ((x1 + y1) * ((x1 + y1) + 1)) / 2 + x1;
        B = ((x2 + y2) * ((x2 + y2) + 1)) / 2 + x2;
        cout << "Case " << i + 1 << ": " << B - A << endl;
    }

    return 0;
}