#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[0] <= 0 || a[1] <= 0 || a[2] <= 0) cout << "Wrong!!\n";
        else if (a[0] + a[1] <= a[2]) cout << "Wrong!!\n";
        else cout << "OK\n";
    }


    return 0;
}