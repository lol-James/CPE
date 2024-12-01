#include <bits/stdc++.h>
using namespace std;

/**
 * 運用map<string, int> key為國家
 * 名字不重要，讀掉就好不用存
**/

int main()
{
    int n;
    cin >> n;
    map<string, int> count_map;
    string country, name;
    for (int i = 0; i < n; i++)
    {
        cin >> country;
        getline(cin, name);
        count_map[country]++;
    }

    for (auto p : count_map) 
        cout << p.first << " " << p.second << endl;

    return 0;
}