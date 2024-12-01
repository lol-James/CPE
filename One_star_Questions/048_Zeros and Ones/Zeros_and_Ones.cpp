#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n, i, j, cases = 1;
    while (cin >> s)
    {   
        if (s == "") break;
        cout << "Case " << cases++ << ":\n";
        int T;
        cin >> T;
        while (T--)
        {   
            cin >> i >> j;
            if (i > j) swap(i, j);
            string test = s.substr(i, j - i + 1);
            char ch = test[0];
            bool flag = true;
            for (auto &i : test)
            {
                if (i != ch)
                {
                    flag = false;
                    break;
                }
            }
            if (flag) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }


    return 0;
}