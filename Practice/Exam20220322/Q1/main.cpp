#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> table;
    for (int i = 0; i < 20000; i++) 
        table.push_back((i * (i + 1)) / 2);

    int n;
    while (cin >> n && n) {
        auto it = upper_bound(table.begin(), table.end(), n);
        cout << *it - n << " " << it - table.begin() << endl;
    }

    return 0;
}