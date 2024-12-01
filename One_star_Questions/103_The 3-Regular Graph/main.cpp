#include <bits/stdc++.h>

using namespace std;

/**
 * 根據推論：只有偶數點才有辦法構成3-regular
 * 1or2個點，一定是impossible
 * 
 * 先連成一個環，再連對角線
*/

void generateRegularGraph(int n) {

}

int main() {
    int n;
    while (cin >> n && n != 0) {
        if (n < 3 || n % 2 != 0) {
            cout << "Impossible" << endl;
        }
        else {
            vector<pair<int, int>> edges;
            // Add the cycle
            for (int i = 1; i < n; ++i) {
                edges.emplace_back(i, i + 1);
            }
            edges.emplace_back(1, n);

            // Add the skipping edges
            for (int i = 1; i <= n / 2; ++i) {
                edges.emplace_back(i, i + n / 2);
            }

            // Sort edges by first then second element
            sort(edges.begin(), edges.end());

            cout << edges.size() << endl;
            for (auto edge : edges) {
                cout << edge.first << " " << edge.second << endl;
            }
        }
    }
    
    return 0;
}