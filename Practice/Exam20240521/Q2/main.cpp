#include <bits/stdc++.h>

using namespace std;

/**
 * 找出10組URL中，數字最大的URL，可能有多個
*/

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        vector<pair<string, int>> webs(10);
        for (int j = 0; j < 10; j++) {
            cin >> webs[j].first >> webs[j].second;
        }
        sort(webs.begin(), webs.end(), 
            [](const pair<string, int>& a, const pair<string, int>& b) { return a.second > b.second; });
        cout << "Case #" << i << ":\n";
        int max = webs[0].second;
        for (auto& w : webs) {
            if (w.second == max) {
                cout << w.first << endl;
            }
            else {
                break;
            }
        }
    }

    return 0;
}