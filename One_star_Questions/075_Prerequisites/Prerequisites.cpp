#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, m;
    while (cin >> k)
    {
        if (k == 0) break;
        cin >> m;
        set<string> courses;
        for (int i = 0; i < k; i++)
        {
            string s;
            cin >> s;
            courses.insert(s);
        }

        bool ok = true;
        for (int i = 0; i < m; i++)
        {
            int r, c;
            cin >> r >> c;
            int count = 0;
            for (int j = 0; j < r; j++)
            {
                string s;
                cin >> s;
                if (courses.count(s)) count++;
            }
            if (count < c) ok = false;
        }

        if (ok == true) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}