#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<string, int> > v;
        for (int i = 0; i < n; i++) {
            string m;
            int f;
            cin >> m >> f;
            v.emplace_back(m, f);
        }
        int time = 0, count = 0;
        while (true) {
            time++;
            int flag = false;
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
            if (flag == true) {
                break;
            }
        }
    }

    return 0;
}