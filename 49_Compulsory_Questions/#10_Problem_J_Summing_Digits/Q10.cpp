#include <iostream>

using namespace std;

/**
 * 一直把每個位數相加，直到剩下個位數
 * 使用long long int
 * 直接while即可，不需要特殊的解法
*/

int main()
{
    long long int n;
    while (cin >> n)
    {
        if (n == 0) break;

        while (n >= 10)
        {
            long long int temp = n;
            int sum = 0;
            while (temp)
            {
                sum += temp % 10;
                temp /= 10;
            }
            n = sum;
        }
        cout << n << endl;
    }

    return 0;
}