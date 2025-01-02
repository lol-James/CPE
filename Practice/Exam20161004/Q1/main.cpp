#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
        string str; cin >> str;
        string newStr = "";
        n = str.size() / n;
        for (int i = 0; i < str.length(); i += n) {
            string sub = str.substr(i, n);
            reverse(sub.begin(), sub.end());
            newStr += sub;
        }
        cout << newStr << endl;
    }

    return 0;
}