#include <bits/stdc++.h>
using namespace std;

struct node { int x, y; };


int main()
{
    int T;
    int n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        vector<node> point(n);
        for (int i = 0; i < n; i++) cin >> point[i].x >> point[i].y;
        sort(point.begin(), point.end(), [](const node& a, const node& b) {
            if (a.x == b.x) return a.y < b.y;
            return a.x < b.x;
        });
        bool flag = true;
        int sym_x = point[0].x + point[n - 1].x;
        int sym_y = point[0].y + point[n - 1].y;
        for (int i = 1; i < n / 2; i++)
        {
            int j = n - i - 1;
            if (point[i].x + point[j].x != sym_x || point[i].y + point[j].y != sym_y)
            {
                flag = false;
                break;
            }
        }
        if (flag) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}