#include <iostream>
using namespace std;

/**
 * 給定一個 N 進制 (2 ≤ N ≤ 62) 的數字 R
 * R 保證可以被 (N-1) 整除
 * 求符合題意最小N
 * 當 N = 62 時，用來表示62進制的字符為 0..9, A..Z, a..z
 * 公式：
 * 如果一個N+1進制abc是N的倍數，則 (a + b + c) 也是N的倍數
**/

int main() {
    string s;
    while (getline(cin, s)){
        int sum = 0, mx = 1, i;
        for (i = 0; i < s.size(); i++) {
            int temp = 0;
            if (isdigit(s[i])) temp = s[i] - '0';
            else if (isupper(s[i])) temp = s[i] - 'A' + 10;
            else if (islower(s[i])) temp = s[i] - 'a' + 36;
            else continue;
            mx = max(mx, temp);
            sum += temp;
        }
 
        for (i = mx; i < 62; i++) {
            if (sum % i == 0) {
                cout << i + 1 << endl;
                break;
            }
        }
        if (i == 62)
            cout << "such number is impossible!\n";
    }
    return 0;
}