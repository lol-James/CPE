#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        vector<int> v(4);
        for (int i = 0; i < 4; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (v[0] == v[1] && v[1] == v[2] && v[2] == v[3]) {
            cout << "square" << endl;
        } 
        else if (v[0] == v[1] && v[2] == v[3]) {
            cout << "rectangle" << endl; 
        }
        else if (v[0] + v[1] + v[2] > v[3]) {
            cout << "quadrangle" << endl; 
        }
        else {
            cout << "banana" << endl;
        }
    }

    return 0;
}