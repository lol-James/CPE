#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int cases = 1; cases <= n; ++cases) {
        int num;
        cin >> num;
        vector<int> v(num);
        for (int i = 0; i < num; i++) cin >> v[i];
        sort(v.begin(), v.end());
        cout << "Case " << cases << ": " << v[num / 2] << endl;
    }


    return 0;
}