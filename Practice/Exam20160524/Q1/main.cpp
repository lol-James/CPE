#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    cout << "Lumberjacks:" << endl;
    while (t--) {
        vector<int> a(10); for (int i = 0; i < 10; i++) cin >> a[i];
        vector<int> b(a); 
        if (a[0] <= a[1]) sort(b.begin(), b.end()); 
        else sort(b.begin(), b.end(), [](int a, int b){return a > b;});
        int i;
        for (i = 0; i < 10; i++) if (a[i] != b[i]) break;
        if (i == 10) cout << "Ordered" << endl;
        else cout << "Unordered" << endl; 
    }


    return 0;
}