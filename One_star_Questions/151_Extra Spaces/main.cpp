#include <bits/stdc++.h>

using namespace std;

/**
 * 利用一個flag來存前一個字元是否為空格，作為遍歷str時，遇到空格是否該打印空格的依據
 * 注意空行，很容易Presentation Error
**/

int main()
{
    int t;
    cin >> t;
    for (int cases = 1; cases <= t; ++cases) {
        int n;
        cin >> n;
        cin.ignore();   // 去除\n
        cout << "Case " << cases << ":" << endl;
        while (n--) {
            string str;
            getline(cin, str);
            bool flag = true;   // true: str的前一個字元不是空格
            for (int i = 0; i < str.length(); i++) {
                if (str[i] == ' ') {
                    if (flag)
                        cout << str[i];
                    flag = false;
                }
                else {
                    cout << str[i];
                    flag = true;
                }
            }
            cout << endl;
        }
        if (cases != t) // 除了最後一個case外，都要額外空一行
            cout << endl;
    }

    return 0;
}
