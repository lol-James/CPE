#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases = 0, n, m;
    while (cin  >> n >> m)
    {   
        if (n == 0 && m == 0) break;
        cases++;
        cout << "CASE# " << cases << ":" << endl;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        while (m--)
        {   
            int target;
            cin >> target;
            auto it = find(v.begin(), v.end(), target);
            if (it != v.end())
            {
                int index = it - v.begin();
                cout << target << " found at " << index + 1 << endl;
            }
            else
            {
                cout << target << " not found" << endl;
            }
        }
    }

    return 0;
}