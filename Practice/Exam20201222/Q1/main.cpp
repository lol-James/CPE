#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        int e, f, c; cin >> e >> f >> c;
        int sum = 0, bottle = e + f;
        while (bottle / c) {
            sum += bottle / c;
            bottle = bottle / c + bottle % c;
        }
        cout << sum << endl;
    }

    return 0;
}