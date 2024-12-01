#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int balance = 0;
    while (t--) {
        string str;
        cin >> str;
        if (str == "donate") {
            int money;
            cin >> money;
            balance += money;
        }
        else {
            cout << balance << endl;
        }
    }


    return 0;
}