#include <bits/stdc++.h>
using namespace std;

/**
 * Accepted : string 中所有字元皆相同
 * Presentation Error : 所有數字皆正確，但至少有 1 個以上的字元錯誤
 * Wrong Answer : 數字錯誤
**/

int main()
{
    int N, M, cases = 0;
    string temp;
    while (cin >> N && N)
    {
        vector<string> ans, team;
        getline(cin, temp); // erase '\n'
        while (N--)
        {
            getline(cin, temp);
            ans.push_back(temp);
        }
        cin >> M;
        getline(cin, temp); // erase '\n'
        while (M--)
        {
            getline(cin, temp);
            team.push_back(temp);
        }

        cout << "Run #" << ++cases << ": ";
        if (ans == team)
        {
            cout << "Accepted" << endl;
            continue;
        }

        string ansNum = "", teamNum = "";
        for (auto &i : ans)
            for (auto &j : i)
                if (isdigit(j)) ansNum += j;
        for (auto &i : team)
            for (auto &j : i)
                if (isdigit(j)) teamNum += j;
        if (ansNum == teamNum) cout << "Presentation Error" << endl;
        else cout << "Wrong Answer" << endl;
    }
    
    return 0;
}