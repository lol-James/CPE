#include <bits/stdc++.h>

using namespace std;

/**
 * 注意事項：需用long long，不可使用double，會精度缺失
*/

int main() {
    long long cases = 1, v1, d1, v2, d2;
    while (cin >> v1 >> d1 >> v2 >> d2 && v1 && d1 && v2 && d2) {
        cout << "Case #" << cases++ << ": ";
        if (d1 * v2 < d2 * v1) cout << "You owe me a beer!" << endl;
        else cout << "No beer for the captain." << endl;
        long long num1 = d1 * v2 + d2 *  v1;    // num1/num2
        long long num2 = 2 * v1 * v2;
        long long g = __gcd(num1, num2);
        num1 /= g;
        num2 /= g;

        if (num2 == 1) cout << "Avg. arrival time: " << num1 << endl;
        else cout << "Avg. arrival time: " << num1 << "/" << num2 << endl;
    } 

    return 0;
}