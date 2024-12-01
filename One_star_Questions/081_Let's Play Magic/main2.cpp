#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n && n) {
        vector<pair<string, int> > a;
        for (int i = 0; i < n; i++) {
            string card, word;
            cin >> card >> word;
            a.emplace_back(pair<string, int>(card, word.length()));
        }

        vector<int> order(n, -1);
        int idx = 0;
        for (int i = 0; i < n; i++) {
            int len = a[i].second;
            while (true) {
                if (order[idx] == -1) {
                    len--;
                    if (len == 0) {
                        order[idx] = i;
                        break;
                    }
                }
                idx = (idx + 1) % n;
            }
        }

        for (int i = 0; i < n; i++) {
            if (i) cout << " ";
            cout << a[order[i]].first;
        }
        cout << endl;
    }

    return 0;
}