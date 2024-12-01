#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases, num;
    cin >> cases;
    for (int t = 1; t <= cases; t++)
    {
        cin >> num;
        int count = 0;
        printf("Case #%d: %d", t, num);
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                printf(" = %d * %d", i, num / i);
                count++;
                if (count == 2) break;
            }
        }
        cout << endl;
    }

    return 0;
}