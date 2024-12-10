#include <iostream>
#include <string>

using namespace std;

/**
 * 用字串讀取
 * 使用11倍數判斷法判斷是否為11的倍數
 * 遍歷字串，看index的奇偶一加一減
 * sum再取絕對值
 * 判斷%11是否為0
**/

int main()
{
    string s;

    while (cin >> s)
    {
        int sum = 0;
        if (s == "0")
            break;
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2)
                sum += (int)(s[i] - '0');
            else
                sum -= (int)(s[i] - '0');
        }
        sum = abs(sum);
        if (!(sum % 11))
            cout << s << " is a multiple of 11.\n";
        else
            cout << s << " is not a multiple of 11.\n";
    }

    return 0;
}