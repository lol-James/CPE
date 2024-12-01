#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int a = (s[0] - 'A') * 26 * 26 + 
                (s[1] - 'A') * 26 + 
                (s[2] - 'A');
        int b = stoi(s.substr(4));
        if (abs(a - b) <= 100) cout << "nice" << endl;
        else cout << "not nice" << endl;
    }

    return 0;
}