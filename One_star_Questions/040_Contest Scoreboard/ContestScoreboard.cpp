#include <bits/stdc++.h>
using namespace std;

struct node
{
    int ic[10];     // 第i題incorrect幾次
    bool ac[10];    // 第i題是否有答對
    int time;       // 總花費時間
    int id;         // 參賽者編號(1~100)
    int solved;     // 總答對題數
    node()
    {
        for (int i = 0; i < 10; i++)
        {
            ic[i] = 0;
            ac[i] = false;
        }
        time = 0;
        id = -1;
        solved = 0;
    }
};

map<int, node> mp;

int main()
{
    char s[101];
    int t;
    scanf("%d", &t);
    getchar();  // erase '\n'
    getchar();  // erase blank line
    while (t--)
    {
        int a, b, c, k;
        char d;
        mp.clear();
        while (gets(s) && s[0])     // 每一組測資有幾筆submit不確定
        {   
            sscanf(s, "%d %d %d %c", &a, &b, &c, &d);
            node p;
            p = mp[a];
            p.id = a;
            mp[a].id = a;           // 這句要記得寫，防止走continue時，id被設為default(-1)
            if (d == 'R' || d == 'U' || d == 'E') continue;
            if (p.ac[b]) continue;
            if (d == 'C')
            {
                p.ac[b] = true;
                p.time += c + p.ic[b] * 20;
                p.solved++;
            }
            else
            {
                p.ic[b]++;
            }
            mp[a] = p;
        }
        vector<node> v;
        for (auto &i : mp) v.push_back(i.second);
        sort(v.begin(), v.end(), [](const node &a, const node &b) {
            return (a.solved != b.solved) ? a.solved > b.solved : a.time < b.time;
        });
        for (int i = 0; i < v.size(); i++)
        {
            int id = v[i].id, solved = v[i].solved, time = v[i].time;
            printf("%d %d %d\n", id, solved, time);
        }
        if (t) cout << endl;
    }

    return 0;
}