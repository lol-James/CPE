#include <iostream>
using namespace std;

/**
 * 求出總共可喝到幾瓶可樂
 * 3個空瓶可換一瓶可樂
 * 剩2個空瓶時，可去借一空瓶，集滿3瓶換一瓶，喝完再拿去還
**/

int main()
{
    int n, count;
    while (cin >> n)
    {
        count = n;              // 至少可喝n瓶
        while (n >= 3)
        {
            count += n / 3;
            n = n / 3 + n % 3;  // n/3:換回來喝掉剩下的空瓶 n%3:前一次拿3的倍數瓶去換時所留下的空瓶
        }
        if (n == 2) count++;    // 最後剩兩個空瓶
        cout << count << endl;
    }
    return 0;
}
