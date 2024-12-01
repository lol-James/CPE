#include <bits/stdc++.h>

using namespace std;

string s;

string num2str(int x) {
    if (x == 0) return "0";
    
    string result = "";
    while (x) {
        result += ('0' + (x % 10));
        x /= 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

int str2num(const string& str) {
    int result = 0;
    for (int i = 0; i < str.length(); i++) {
        result = result * 10 + (str[i] - '0');
    }
    return result;
}

int check(int ST) {
    string s1 = "";
    for (int i = 0; i < s.size(); i++) {
        int x = ST + (s[i] - 'A');
        s1 += num2str(x);
    }
    string s2 = "";
    while (s1.size() >= 3) {
        if (s1.size() == 3 && str2num(s1) == 100) break;   // 成功得到100
        s2 = "";
        for (int i = 0; i < s1.size() - 1; i++) {
            int x = (s1[i] - '0') + (s1[i + 1] - '0');
            s2 += num2str(x % 10);
        }
        s1 = s2;
    }

    return str2num(s1);
}

int main() {
    while (cin >> s) {
        int i;
        for (i = 1; i <= 10000; i++) {
            if (check(i) == 100) {
                cout << i << endl;
                break;
            }
        }
        if (i > 10000) cout << ":(" << endl;
    }

    return 0;
}