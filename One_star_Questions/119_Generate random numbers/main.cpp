#include <bits/stdc++.h>

using namespace std;

/**
 * a_(n+1) = ((a_n * a_n) / 100) % 10000
*/

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;

        vector<bool> visited(10000, false);
        int count = 0;
        while (!visited[n]) {
            count++;
            visited[n] = true;
            n = ((n * n) / 100) % 10000;
        }
        cout << count << endl;
    }


    return 0;
}