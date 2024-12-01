#include <bits/stdc++.h>

using namespace std;

/**
 * 從第一個數開始一直加，出現sum出現負數就歸零
 * 同時，用一個mx來記錄最大值
 * 最後的mx即為所求
*/

int main() {
    string s;
    while (getline(cin, s)) {
        stringstream ss(s);
        vector<int> v;
        int num;
        while (ss >> num) v.push_back(num);
        int mx = 0, sum = 0;
        for (int i = 0; i < v.size(); i++) {
            sum += v[i];
            if (sum < 0) sum = 0;
            mx = max(mx, sum);
        }
        cout << mx << endl;
    }

    return 0;
}