#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    bool flag = false;
    while (getline(cin, str)) {
        map<int, int> mp;
        for (auto i : str) mp[i]++;
        vector<pair<int, int>> v;
        for (auto &i : mp) v.push_back(i);
        sort(v.begin(), v.end(), 
        [](const pair<int, int> &a, const pair<int, int> &b) { return (a.second != b.second) ? a.second < b.second : a.first > b.first; });
        if (flag) cout << endl;
        flag = true;
        for (auto &i : v) cout << i.first << " " << i.second << endl;
    }



    return 0;
}