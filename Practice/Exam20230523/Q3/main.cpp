#include <bits/stdc++.h>

using namespace std;

/**
 * 給一個分數，將其轉換為連分數
 * 注意格式
*/

int main() {
    int a, b;   // a/b
    while (cin >> a >> b) {
        printf("[%d;", a / b);
        a %= b;
        while (a != 1) {
            swap(a, b);
            printf("%d,", a/b);
            a %= b;
        }
        printf("%d]\n", b);
    }

    return 0;
}