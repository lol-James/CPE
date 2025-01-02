#include <bits/stdc++.h>

using namespace std;

/**
 * 使用有向圖+dfs
**/

// 有向圖
vector<vector<int> > graph;
// 記錄某一骨牌是否已經被推倒了
// 已經倒下的不能重複計算
vector<bool> visited;

int dfs(int u) {
    visited[u] = true;
    int res = 1;
    for (int v : graph[u]) if (!visited[v]) res += dfs(v);
    return res;
}


int main() {
    // t: 測資筆數
    int t; cin >> t;
    while (t--) {
        // n: 骨牌數量, m: 骨牌之間關係數量, l: 需要手動擊倒的骨牌數量 
        int n, m, l; cin >> n >> m >> l;
        graph.clear(); graph.resize(n);
        for (int i = 0; i < m; i++) {
            int u, v; cin >> u >> v;
            // 陣列從0開始，但骨牌編號從1開始，為求方便，故骨牌編號都-1
            graph[u-1].push_back(v-1);
        }
        int ans = 0;
        visited.assign(n, false);
        // 把所有要推倒的骨牌推倒，看可以再推倒哪些骨牌(連鎖反應)
        for (int i = 0; i < l; i++) {
            int z; cin >> z;
            if (!visited[z - 1]) ans += dfs(z-1);
        }
        cout << ans << endl;
    }

    return 0;
}