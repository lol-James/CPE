#include <bits/stdc++.h>
using namespace std;

int main()
{
    stringstream ss;
    string str;
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        ss.clear();
        ss.str("");
        for (int i = 1; i <= N; i++) ss << i;
        int a[10] = {0};
        str = ss.str();
        for (int i = 0; i < str.size(); i++) a[str[i] - '0']++;
        for (int i = 0; i < 10; i++)
        {
            cout << a[i];
            if (i != 9) cout << " ";
        }
        cout << endl;
    }

    return 0;
}