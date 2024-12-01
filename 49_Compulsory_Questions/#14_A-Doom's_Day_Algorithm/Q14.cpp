#include <iostream>
using namespace std;

/**
 * In year 2011, doomsday is Monday. 
 * So all of 4/4, 6/6, 8/8, 10/10 and 12/12 are Mondays.
 * 用1/6是Thursday去回推1/1是星期幾
 * 再根據距離1/1的天數去推算m/d是星期幾
*/

int main()
{
    string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int num_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const int base = 4;

    int n, m, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m >> d;
        int days = 0;
        for (int j = 0; j < m - 1; j++)
            days += num_day[j];
        days += d;
        cout << day[(days + base) % 7] << endl;
    }

    return 0;
}