#include <bits/stdc++.h>

using namespace std;

/**
 * 求區間[a, b]內有幾個平方數
 * 注意：如果a是平方數記得要 + 1
**/

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;
        cout << ((sqrt(a) - (int)sqrt(a)) ? 
            (int)sqrt(b) - (int)sqrt(a) : (int)sqrt(b) - (int)sqrt(a) + 1) << endl;
    }

    return 0;
}