#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, count, score;
    string s;
    cin >> T;
    while (T--)
    {
        cin >> s;
        count = score = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == 'O') score += ++count;
            else count = 0;
        cout << score << endl;
    }

    return 0;
}