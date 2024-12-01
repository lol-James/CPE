#include <bits/stdc++.h>
using namespace std;

/**
 * 0+1 = 1
 * 1+0 = 1
 * 0+0 = 0
 * 1+1 = 0
 * => XOR(^)
*/

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        cout << (n ^ m) << endl;
    }
    return 0;
}