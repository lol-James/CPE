#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, h;
    while (cin >> w >> h)
    {
        // 6個矩形需要構成3對完全相同的矩形
        // 滿足每個不同正方形的個數均為2的倍數
        map<pair<int, int>, int> rectMap;
        // 6個矩形的12條邊應該構成3組完全相同的邊(長寬高)
        // 滿足每條不同長度的邊個數均為4的倍數
        map<int, int > checkMap;
        checkMap[w]++;
        checkMap[h]++;
        rectMap[make_pair(max(w, h), min(w, h))]++;
        for (int i = 0; i < 5; i++)
        {
            cin >> w >> h;
            checkMap[w]++;
            checkMap[h]++;
            rectMap[make_pair(max(w, h), min(w, h))]++;
        }
        bool flag = true;
        for (auto &i : checkMap)
        {
            if (i.second % 4 != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            for (auto &i : rectMap)
            {
                if (i.second % 2 != 0)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) cout << "POSSIBLE" << endl;
        else cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}