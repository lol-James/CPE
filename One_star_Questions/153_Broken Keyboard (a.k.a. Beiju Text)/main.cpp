#include <bits/stdc++.h>

using namespace std;

/**
 * 此題要使用list模擬插入字串
 * 不適合使用vector
 * 迭代器會失效
 * 因為vector內部是維護一個array，插入的效率極差
 * 而list則是維護一個linked list，插入效率佳
 * 
**/

int main() {
    string str;
    while (getline(cin, str)) {
        list<char> outputText;
        auto it = outputText.begin();
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '[') it = outputText.begin();
            else if (str[i] == ']') it = outputText.end();
            else outputText.insert(it, str[i]);
        }
        for (auto i : outputText) cout << i;
        cout << endl;
    }  

    return 0;
}