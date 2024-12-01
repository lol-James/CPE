#include <bits/stdc++.h>

using namespace std;

/**
 * 注意要long long才夠大
*/

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        long long a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);

        cout << "Case " << i << ": ";
        if (a[0] <= 0 || a[1] <= 0 || a[2] <= 0) {
            cout << "Invalid\n";
        }
        else if (a[0] + a[1] <= a[2]) {
            cout << "Invalid\n";
        }
        else if (a[0] == a[1] && a[1] == a[2]) {
            cout << "Equilateral\n";
        }
        else if (a[0] == a[1] || a[1] == a[2]) {
            cout << "Isosceles\n";
        }
        else {
            cout << "Scalene\n";
        }

    }

    return 0;
}