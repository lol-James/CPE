#include <bits/stdc++.h>

using namespace std;

/**
 * 找出一個數的所有分解方式 
 * Use 回溯 and dfs
 * ans用來存答案
 * path用來存當前的因式分解
 * 
 * 為了確保結果為遞增不重複，在尋找下一個因數時，限制因數的範圍為[pre, n]
 * pre是path的最後一個數(最大)， 如果path為空，就取pre=2
 * 
 * 
**/

vector<vector<int>> ans;
vector<int> path;

void dfs(int n) {
    if (n == 1 && path.size() > 1) {
        ans.push_back(path);
        return;
    }

    int pre = path.empty() ? 2 : path.back();
    for (int i = pre; i <= n; i++) {
        if (n % i == 0) {
            path.push_back(i);
            dfs(n / i);
            path.pop_back();    // 回溯，將path的最後一個數pop掉，嘗試其他可能的結果
        }
    }
}

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        ans.clear();
        path.clear();
        dfs(n);
        cout << ans.size() << endl;
        for (auto& a : ans) {
            for (int i = 0; i < a.size(); i++) {
                cout << a[i];
                if (i == a.size() - 1) {
                    cout << endl;
                }
                else {
                    cout << " ";
                }
            }
        }
    }

    return 0;
}