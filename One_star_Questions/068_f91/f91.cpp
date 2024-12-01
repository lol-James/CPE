#include <bits/stdc++.h>
using namespace std;

int f(int x)
{
    if (x <= 100) return f(f(x + 11));
    else return x - 10;
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0) break;
        printf("f91(%d) = %d\n", n, f(n));
    }

    return 0;
}