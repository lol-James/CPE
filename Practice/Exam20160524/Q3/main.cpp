#include <iostream>

using namespace std;

long long int f[40] = {0, 1};   // 大小設40就夠用了

void fib() {
    for (int i = 2; i < 40; i++) f[i] = f[i - 2] + f[i - 1];
}

int main() {
    fib();
    int t; cin >> t;
    while (t--) {
        int num; cin >> num;
        cout << num << " = ";
        bool flag = false;
        for (int i = 39; i >= 2; i--) {
            if (num >= f[i]) {
                num -= f[i];
                cout << 1;
                flag = true;
            }
            else if (flag == true) {
                cout << 0;
            }
        }
        cout << " (fib)" << endl;
    }
}