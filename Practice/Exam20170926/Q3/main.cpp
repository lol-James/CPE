#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<pair<string, int>> v;
        for (int i = 0; i < n; i++) {
            string name;
            int num;
            cin >> name >> num;
            v.push_back(make_pair(name, num));
        }
        int count = 0, time = 0;
        bool flag = false;
        while (true) {
            time++;
            for (auto& i : v) {
                if (time % i.second == 0) {
                    cout << time << " " << i.first << endl;
                    count++; 
                    if (count == k) {
                        flag = true;
                        break;
                    }
                }
            }
            if (flag == true) break;
        }

    }

    return 0;
}