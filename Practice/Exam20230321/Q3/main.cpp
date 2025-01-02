#include <bits/stdc++.h>

using namespace std;

/**
 * 簡單的stack模擬
*/

int main() {
    int t; cin >> t;
    stack<string> names;
    while (t--) {
        string cmd, name;
        cin >> cmd;
        if (cmd == "Sleep") {
            cin >> name;
            names.push(name);
        }
        else if (cmd == "Kick") {
            if (!names.empty()) {
                names.pop();
            }
        }
        else if (cmd == "Test") {
            if (!names.empty()) {
                name = names.top();
                cout << name << endl;
            }
            else {
                cout << "Not in a dream" << endl;
            }
        }
    }

    return 0;
}