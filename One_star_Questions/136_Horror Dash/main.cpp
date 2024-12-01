#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int cases = 1; cases <= n; ++cases) {
        int num;
        cin >> num;
        int maxSpeed = 0;
        int speed;
        for (int i = 0; i < num; ++i) {
            cin >> speed;
            maxSpeed = max(maxSpeed, speed);
        }

        cout << "Case " << cases << ": " << maxSpeed << endl;
    }

    return 0;
}