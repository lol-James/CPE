#include <bits/stdc++.h>
using namespace std;

int main()
{
    stringstream ss;
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    while (n--)
    {
        getline(cin, s);
        vector<int> index;
        getline(cin, s);
        ss.clear();
        ss.str(s);
        int num;
        while (ss >> num) index.push_back(num);
        vector<string> v;
        getline(cin, s);
        ss.clear();
        ss.str(s);
        string str;
        while (ss >> str) v.push_back(str);
        string a[index.size() + 1];
        for (int i = 0; i < index.size(); i++) a[index[i]] = v[i];
        for (int i = 1; i <= index.size(); i++) cout << a[i] << endl;
        if (n) cout << endl;
    }

    return 0;
}