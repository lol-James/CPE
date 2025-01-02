#include <bits/stdc++.h>

using namespace std;

/**
 * 
 * ((a * a) % 1000000) / 100
*/

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;

        vector<bool> v(10000, false);
        int count = 0;
        while (!v[n]) {
            count++;
            v[n] = true;
            n = (n * n) % 1000000 / 100;
        }
        cout << count << endl;

    }

    return 0;
}