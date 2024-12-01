#include <bits/stdc++.h>

using namespace std;

/**
 * 先決條件 gcd|lcm
 * a * b = gcd * lcm
 * 
 * gcd|a,b and a,b|lcm
 * Since gcd|a, a is a multiple of gcd, and a is minimized,
 * Hence a = gcd
 * than b = lcm
 * 
**/

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long gcd, lcm;
        cin >> gcd >> lcm;
        if (lcm % gcd != 0) {
            cout << -1 << endl;
        }
        else {
            cout << gcd << " " << lcm << endl;
        }
    }

    return 0;
}