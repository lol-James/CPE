#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1);

int main() {
    int n;
    cin >> n;
    while (n--) {
        double len;
        cin >> len;
        double ans1 = (len / 5) * (len / 5) * PI;
        double ans2 = len * (len * 0.6) - ans1;
        printf("%.2lf %.2lf\n", ans1, ans2);

    }    

    return 0;
}