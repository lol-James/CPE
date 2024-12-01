#include <bits/stdc++.h>

using namespace std;

int main() {
    double l, w, h, theta;
    while (cin >> l >> w >> h >> theta) {
        if (tan(theta * M_PI / 180) < h / l) {  // 梯形算法
            printf("%.3lf mL\n", w * l * h - 0.5 * w * l * l * tan(theta * M_PI / 180));
        }
        else {  // 三角形算法
            printf("%.3lf mL\n", 0.5 * h * h * w / tan(theta * M_PI / 180));
        }
    }

    return 0;
}