#include <bits/stdc++.h>
using namespace std;

/**
 * 統計字母並排序
 * 排序規則：
 * 次數由大到小
 * 次數相同時，看字母由小到大
 **/

struct alphabet
{
    char alp;
    int times;
};

int main()
{
    int n;
    string str;
    alphabet a[26];
    for (int i = 0; i < 26; i++)
    {
        a[i].alp = (char)((int)'A' + i);
        a[i].times = 0;
    }

    cin >> n;
    for (int i = 0; i <= n; i++) // 要多讀一次，把輸入n時按的enter讀掉
    {
        getline(cin, str);
        for (int j = 0; j < str.length(); j++)
            if (isalpha(str[j]))
                a[toupper(str[j]) - 'A'].times++;
    }

    sort(a, a + 26, [](alphabet a, alphabet b)
         { return ((a.times > b.times) ||
                   (a.times == b.times &&
                    a.alp < b.alp)); });

    for (int i = 0; i < 26; i++)
        if (a[i].times == 0)
            break;
        else
            cout << a[i].alp << " " << a[i].times << endl;

    return 0;
}
