#include <bits/stdc++.h>

using namespace std;
/**
 * 1 
 * 21
 * 1211
 * 111221
 * 312211
 * 13112221
 * ...
 * 
 * input: x1, i, j
 * output: 首項為x1的數列，第i項的第j位的值為何？
 * 因為j<=1000
 * 每一項字串長度1000就好，後面的可以直接捨棄
**/

string num2str(int n) {
    string result;
    while (n) {
        result += ('0' + n % 10);
        n /= 10;
    }

    return result;
}

string change(string str) {
    string result;
    int count = 1, i;
    for (i = 0; i < str.length() - 1; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        }
        else {
            result += num2str(count);
            result += str[i];
            count = 1;
        }
    }
    result += num2str(count);
    result += str[i];
    
    return result;
}

int main() {
    string s;
    int i, j;
    while (cin >> s >> i >> j) {
        if (s == "0" && i == 0 && j == 0) break;
        while (--i) {
            s = change(s).substr(0, 1000);
        }
        cout << s[j - 1] << endl;
    }

    return 0;
}