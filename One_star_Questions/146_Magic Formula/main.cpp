#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d, L;
    while (cin >> a >> b >> c >> d >> L) {
        if (a == 0 && b == 0 && c == 0 && d == 0 && L == 0) break;
        int count = 0;
        for (int i = 0; i <= L; i++) {
            int ans = a * i * i + b * i + c;
            if (ans % d == 0) count++;
        }
        cout << count << endl;
    }

    return 0;
}