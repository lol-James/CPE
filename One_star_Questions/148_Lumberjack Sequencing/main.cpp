#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "Lumberjacks:\n";
    while (n--) {
        int a[10];
        for (int i = 0; i < 10; i++) 
            cin >> a[i];
        bool flag = a[0] < a[1];    // 如果a[0] < a[1]就視為使用升序排序
        bool ordered = true;
        for (int i = 1; i < 10; i++) {
            for (int j = 0; j < 10 - i; j++) {
                if (flag) {     // 假定升序
                    if (a[j] > a[j + 1]) {
                        ordered = false;
                        break;
                    }
                }
                else {
                    if (a[j] < a[j + 1]) {
                        ordered = false;
                        break;
                    }
                }
            }
            if (ordered == false) break;
        }

        if (ordered) cout << "Ordered\n";
        else cout << "Unordered\n";
    }


    return 0;
}