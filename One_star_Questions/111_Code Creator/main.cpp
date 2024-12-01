#include <bits/stdc++.h>

using namespace std;

/**
 * "要改為 \"
 * \要改為 \\
*/

int main() {
    int n, cases = 0;
    while (cin >> n) {
        cin.ignore();   // 去除\n
        if (n == 0) break;
        cout << "Case " << ++cases << ":" << endl;
        cout << "#include<string.h>" << endl;
        cout << "#include<stdio.h>" << endl;
        cout << "int main()" << endl;
        cout << "{" << endl;

        while (n--) {
            string str;
            getline(cin, str);
            cout << "printf(\"";
            for (auto ch : str) {
                if (ch == '\"' || ch == '\\') {
                    cout << "\\";
                }
                cout << ch;
            }
            cout << "\\n\");" << endl;
        }
        cout << "printf(\"\\n\");" << endl;
        cout << "return 0;" << endl;
        cout << "}" << endl;
    }


    return 0;
}