#include <bits/stdc++.h>

using namespace std;

bool isCool(const string& str) {
    map<char, int> mp;
    for (auto& i : str) mp[i]++;
    vector<int> v;
    for (auto& i : mp) v.push_back(i.second);
    if (v.size() == 1) return false;
    set<int> st(v.begin(), v.end());
    return st.size() == v.size();
}

int main() {
    int cases = 1;
    int n;
    while (cin >> n) {
        int count = 0;
        while (n--) {
            string str; cin >> str;
            if (isCool(str)) count++;
        }
        cout << "Case " << cases++ << ": " << count << endl;
    }

    return 0;
}