#include <iostream>
using namespace std;

/**
 * 算區間內奇數的總和
 * 運用等差數列的公式
 * 公差為2
 * 首項和末項都必須是奇數
 * 求出項數n
 * 即可代入公式求出答案
**/

int main()
{
    int num, a1, an, n;
    long long int sum;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> a1 >> an;
        a1 = (a1 % 2) ? a1 : a1 + 1;
        an = (an % 2) ? an : an - 1;
        n = ((an - a1) / 2) + 1;
        sum = ((a1 + an) * n) / 2;
        cout << "Case " << i + 1 << ": " << sum << endl;
    }

    return 0;
}