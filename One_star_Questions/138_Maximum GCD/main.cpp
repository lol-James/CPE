#include <bits/stdc++.h>

using namespace std;

int GCD(int x, int y) {
    while ((x %= y) && (y %= x));
    return x + y;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();   // 去除\n
    while (n--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> v;
        int x;
        while (ss >> x) {
            v.push_back(x);
        }

        int maxGCD = 0;
        for (int i = 0; i < v.size() - 1; i++) {
            for (int j = i + 1; j < v.size(); j++) {
                maxGCD = max(maxGCD, GCD(v[i], v[j]));
            }
        }
        cout << maxGCD << endl;
    }

    return 0;
}