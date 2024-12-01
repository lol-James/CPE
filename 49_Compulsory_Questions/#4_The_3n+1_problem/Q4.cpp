#include <iostream>

using namespace std;

/**
 * 遍歷求3n+1數列的長度，取最長的
**/

int main()
{
    int i, j;
    while (cin >> i >> j)
    {
        int start = min(i, j), end = max(i, j), max_len = 0;
        for (int k = start; k <= end; k++)
        {
            int len = 0, n = k;
            while (1)
            {   
                len++;
                if (n == 1) break;
                else if (n % 2) n = 3 * n + 1;
                else n = n / 2;
            }
            max_len = max(len, max_len);
        }
        cout << i << " " << j << " " << max_len << endl;
    }

    return 0;
}