#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;

        int temp = 0, count = 0;
        while (a || b) {
            temp += a % 10 + b % 10;
            a /= 10;
            b /= 10;
            temp /= 10;
            if (temp) count++;
        }
        if (count == 0) {
            cout << "No carry operation." << endl;
        }
        else if (count == 1) {
            cout << "1 carry operation." << endl;
        }
        else {
            cout << count << " carry operations." << endl;
        }

    }

    return 0;
}