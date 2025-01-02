#include <bits/stdc++.h>

using namespace std;

/**
 * 進制轉換
 * 都先轉換為10進制
**/

int main() {
    string str1 = "", str2 = "";
    int base1, base2;
    while (cin >> str1 >> base1 >> base2) {
        int num = 0, pow = 1;
        for (int i = str1.length() - 1; i >= 0; i--) {
            if (isdigit(str1[i])) num += (str1[i] - '0') * pow;
            else num += (str1[i] - 'A' + 10) * pow;
            pow *= base1;
        }

        vector<char> v;
        while (num) {
            int temp = num % base2;
            if (temp < 10) v.push_back((char)('0' + temp));
            else v.push_back((char)('A' + temp - 10));
            num /= base2;
        }

        while (v.size() < 7) {
            v.push_back('0');
        }
        reverse(v.begin(), v.end());
        str2 = "";
        for (auto i : v) str2.push_back(i);
        cout << str2.substr(str2.size() - 7) << endl;
    }

    return 0;
}