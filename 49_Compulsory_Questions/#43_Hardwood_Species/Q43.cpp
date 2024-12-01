#include <bits/stdc++.h>
using namespace std;

/**
 * 統計樹木的個數
 * 並計算出百分比
 * 輸出至小數點後4位
**/

int main()
{
    int n;
    string tree_name;
    map<string, int> tree_map;

    cin >> n;
    cin.get();  // 去除\n
    getline(cin, tree_name);    // 去除空行

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        while (getline(cin, tree_name))
        {
            if (tree_name == "")
                break;
            count++;
            tree_map[tree_name]++;
        }

        if (i != 0) cout << endl;
        for (auto i : tree_map)
            cout << i.first << " " 
                << fixed << setprecision(4) << (float)i.second * 100 / count 
                << endl;

        tree_map.clear();
    }

    return 0;
}