#include <iostream>
#include <iomanip>

using namespace std;

/**
 * 測資範圍：0 <= num <= 999 9999 9999 9999 (long long int)
 * 運用遞迴
 * kuti ： 10000000
 * lakh ： 100000
 * hajar： 1000
 * shata： 100
 * 注意：此題輸出題號的格式要使用setw(4)！！！(佔四字元寬且靠右)
 **/

void bangla(long long num)
{
    if (num >= 10000000)
    {
        bangla(num / 10000000);
        cout << " kuti";
        num %= 10000000;
    }
    if (num >= 100000)
    {
        bangla(num / 100000);
        cout << " lakh";
        num %= 100000;
    }
    if (num >= 1000)
    {
        bangla(num / 1000);
        cout << " hajar";
        num %= 1000;
    }
    if (num >= 100)
    {
        bangla(num / 100);
        cout << " shata";
        num %= 100;
    }
    if (num)
        cout << " " << num;
}

int main()
{
    long long num;
    long long countCase = 0;

    while (cin >> num)
    {
        cout << setw(4) << right << ++countCase << ".";
        if (num)
            bangla(num);
        else
            cout << " 0";   // 注意要空一格
        cout << endl;
    }

    return 0;
}