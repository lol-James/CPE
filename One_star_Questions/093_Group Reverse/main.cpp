#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        string s;
        cin >> s;
        string result = "";
        n = s.length() / n; // now n is the length of the substring
        for (int i = 0; i < s.length(); i += n) {
            string substr = s.substr(i, n);
            reverse(substr.begin(), substr.end());
            result += substr;
        }

        cout << result << endl;
    }

    return 0;
}
