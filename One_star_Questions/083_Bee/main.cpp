#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    while (cin >> n) {
        if (n == -1) break;
        long long F = 1, M = 0;
        for (int i = 1; i <= n; i++) {
            long long temp = M;    
            M += F;                
            F = temp + 1;           
        }

        cout << M << " " << M + F << endl;
    }

    return 0;
}