#include <bits/stdc++.h>
using namespace std;

// 將兩個集合相減即可得到兩者的關係

int main()
{
    string s;
    stringstream ss;
    while (getline(cin, s))
    {
        set<string> A, B, common;
        ss.clear();
        ss.str(s);
        while (ss >> s) A.insert(s);
        getline(cin, s);
        ss.clear();
        ss.str(s);
        while (ss >> s) B.insert(s);
        for (auto& i : A)
            if (B.count(i) == 1)
            {
                common.insert(i);
                B.erase(i);
            }
        for (auto& i : common) A.erase(i);
        if (A.empty() && B.empty())
            cout << "A equals B\n";
        else if (A.empty())
            cout << "A is a proper subset of B\n";
        else if (B.empty())
            cout << "B is a proper subset of A\n";
        else
        {
            if (common.empty())
                cout << "A and B are disjoint\n";
            else
                cout << "I'm confused!\n";
        }
    }

    return 0;
}