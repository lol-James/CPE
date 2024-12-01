#include <iostream>
#include <string>

using namespace std;

/**
 * 第一個 " 用`` 代替
 * 第二個 " 用'' 代替
*/

int main()
{
    string s;
    bool is_left = true; // 全部輸入視為1篇文章，故bool is_left = true;要放外面
    while (getline(cin, s))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '"' && is_left == true)
            {
                cout << "``";
                is_left = false;
            }
            else if (s[i] == '"' && is_left == false)
            {
                cout << "''";
                is_left = true;
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}