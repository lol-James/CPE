#include <bits/stdc++.h>

using namespace std;

int main() {
    const int X = 7;
    string s;
    while (getline(cin, s)) {
        for (auto ch : s) cout << (char)(ch - X);
        cout << endl;
    }

    return 0;
}