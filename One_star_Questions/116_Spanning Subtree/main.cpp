#include <bits/stdc++.h>

using namespace std;

/**
 * 所求即為 n/2 
*/

int main() {
    int n, cases = 0;
    while (cin >> n) {
        if (n == 0) break;
        cout << "Case " << ++cases << ": " << n / 2 << endl;
    }

    return 0;
}