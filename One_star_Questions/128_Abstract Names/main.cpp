#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string vowels = "aeiou";
    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;
        bool isSame = true;
        if (s1.size() != s2.size()) {
            isSame = false;
        }
        else {
            for (int i = 0; i < s1.size(); i++) {
                if (s1[i] != s2[i]) {
                    if (vowels.find(s1[i]) != -1 && vowels.find(s2[i]) != -1) {
                        continue;
                    }
                    else {
                        isSame = false;
                        break;
                    }
                }
            }
        }

        if (isSame) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}