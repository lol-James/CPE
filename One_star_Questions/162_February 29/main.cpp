#include <bits/stdc++.h>

using namespace std;

/**
 * 輸入兩個年份 判斷有幾個2/29
 * 
 * 計算 [1年~結尾年份的2/29日期個數] – [1年~(初始年份-1)的2/29日期個數] 
 * = t2 - t1
 * = 兩個年份之間的2/29日期個數。
 * 
 * 注意初始年份與結尾年份並不一定是所輸入之該年，必須注意當日是否會包含到該年之2/29日。
 **/

int main()
{
    int T;
    string month;
    int day, year;
    int t1, t2;
    while (scanf("%d", &T) != EOF)
    {
        for (int i = 1; i <= T; i++)
        {
            cin >> month;
            scanf("%d, %d", &day, &year);
            // 起始日期為1or2月，這年可能會有2/29，年份要-1，確保當這一年有閏年時，2/29會被算進去
            if ((month[0] == 'J' && month[1] == 'a') || month[0] == 'F')
                year--;
            t1 = year / 4 - year / 100 + year / 400;
            cin >> month;
            scanf("%d, %d", &day, &year);
            // 結束日期為1or2月，這年可能會有2/29，年份要-1，確保當這一年有閏年時，2/29不會被算進去，因為遇不到了
            if ((month[0] == 'J' && month[1] == 'a') || month[0] == 'F')
                year--;
            // 如果結束日期是2/29，年份要+1補回來，因為這個閏日遇得到，要算進去！
            if (month[0] == 'F' && day == 29)
                year++;
            t2 = year / 4 - year / 100 + year / 400;

            printf("Case %d: %d\n", i, t2 - t1);
        }
    }
    return 0;
}