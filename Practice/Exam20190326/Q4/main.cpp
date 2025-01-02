#include <bits/stdc++.h>

using namespace std;

/**
 * 因為stan可能騙人
 * 所以玩家勢必可能要猜不合常理的答案 
 * 但猜不合常理的答案時，不可以影響到原來的上下界，否則會出錯
 * 所以要用min max來限制範圍
*/

int main() {
    int lower = 1, upper = 10;
    int n;
    while (cin >> n && n) {
        cin.ignore();
        string str; getline(cin, str);
        if (str == "too high") {
            upper = min(upper, n - 1);
        }
        else if (str == "too low") {
            lower = max(lower, n + 1);
        }
        else if (str == "right on") {
            if (lower <= n && n <= upper) {
                cout << "Stan may be honest" << endl;
            }
            else {
                cout << "Stan is dishonest" << endl;
            }
            lower = 1;
            upper = 10;
        }
    }


    return 0;
}