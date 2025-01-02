#include <bits/stdc++.h>

using namespace std;

bool judge(int a, int b) {
    if (b > 98765) return false;
    vector<int> used(10, 0);
    if (a < 10000) used[0] = 1;
    while (a) {
        used[a % 10] = 1;
        a /= 10;
    }
    while (b) {
        used[b % 10] = 1;
        b /= 10;
    }
    for (int i = 0; i < 10; i++) 
        if (used[i] != 1) return false;
    return true;
}

int main() {
    bool isFirst = true;
    int n;
    while (cin >> n && n) {
        if (!isFirst) {
            cout << endl;
        }
        isFirst = false;
        int count = 0;
        for (int i = 1234; i < 100000; i++) {   // i為分母可能值，則分子即為n*i
            if (judge(i, i * n)) {
                printf("%05d / %05d = %d\n", i * n, i, n);
                count++;
            }
        }
        if (!count) cout << "There are no solutions for " << n << "." << endl;
    }


    return 0;
}