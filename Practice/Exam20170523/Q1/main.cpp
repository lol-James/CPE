#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[10] = {0};
        for (int i = 1; i <= n; i++) {
            int temp = i;
            while (temp) {
                a[temp % 10]++;
                temp /= 10;
            }
        }
        for (int i = 0; i < 10; i++) {
            cout << a[i];
            if (i != 9) cout << " ";
            else cout << endl;
        }
    }    


    return 0;
}