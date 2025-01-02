#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    while (cin >> x) {
        string s;
        cin.ignore();
        getline(cin, s);
        stringstream ss(s);
        vector<int> v;
        int num;
        while (ss >> num) v.push_back(num);
        for (int i = 0; i < v.size(); i++) v[i] *= v.size() - i - 1;
        v.pop_back();   // 常數項微分後會不見
        num = 1;
        int ans = 0;
        for (int i = v.size() - 1; i >= 0; i--) {
            ans += v[i] * num;
            num *= x;
        }
        cout << ans << endl;
    }


    return 0;
}