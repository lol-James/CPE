#include <bits/stdc++.h>

using namespace std;

/**
 * 求出銷售額大於之前銷售額的總數
*/

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
        int count = 0;
        for (int i = 1; i < n; i++) 
            for (int j = 0; j < i; j++) 
                if (a[i] >= a[j]) count++; 
        cout << count << endl;
    }

    return 0;
}