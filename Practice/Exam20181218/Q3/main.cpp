#include <bits/stdc++.h>

using namespace std;

void bangla(long long n) {
    if (n >= 10000000) {
        bangla(n / 10000000);
        cout << " kuti";
        n %= 10000000;
    }
    if (n >= 100000) {
        bangla(n / 100000);
        cout << " lakh";
        n %= 100000;
    }
    if (n >= 1000) {
        bangla(n / 1000);
        cout << " hajar";
        n %= 1000;
    }
    if (n >= 100) {
        bangla(n / 100);
        cout << " shata";
        n %= 100;
    }
    if (n) {
        cout << " " << n;
    }
}

int main() {
    long long cases = 1, n;
    while (cin >> n) {
        cout << setw(4) << right << cases++ << ".";
        if (n)
            bangla(n);
        else
            cout << " 0";   // 注意要空一格
        cout << endl;
    }


    return 0;
}