#include <bits/stdc++.h>

using namespace std;

int getDescNum(int n) {
    string str = to_string(n);
    vector<char> v;
    for (auto& ch : str) v.push_back(ch);
    sort(v.begin(), v.end(), [](char c1, char c2) { return c1 > c2; });
    str = string(v.begin(), v.end());
    return stoi(str);
}

int getAsceNum(int n) {
    string str = to_string(n);
    vector<char> v;
    for (auto& ch : str) v.push_back(ch);
    sort(v.begin(), v.end(), [](char c1, char c2) { return c1 < c2; });
    str = string(v.begin(), v.end());
    return stoi(str);
}

int main() {
    int n;
    while (cin >> n && n) {
        cout << "Original number was " << n << endl;
        int last, now = n, count = 0;
        set<int> st;
        int preSize = st.size();
        while (true) {
            count++;
            last = now;
            int a = getDescNum(last), b =getAsceNum(last);
            now = a - b;
            cout << a << " - " << b << " = " << now << endl;
            preSize = st.size();
            st.insert(now);
            if (st.size() == preSize) break;
        }
        cout << "Chain length " << count << endl << endl;
    }

    return 0;
}