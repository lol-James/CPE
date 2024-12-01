#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int f;
        cin >> f;
        long long area, num, exp, total = 0;
        while (f--)
        {
            cin >> area >> num >> exp;
            total += area * exp;
        }
        cout << total << endl;
    }

    return 0;
}