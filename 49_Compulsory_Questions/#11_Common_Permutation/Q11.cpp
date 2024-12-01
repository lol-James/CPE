#include <bits/stdc++.h>
using namespace std;

/**
 * input：兩個全小寫字串a b
 * output:a b的皆有的字母，依字母順序排序
 * 若皆有2個e，就輸出ee
 **/

int main()
{
    string a, b;
    while (getline(cin, a))
    {
        getline(cin, b);
        int count_a[26] = {0}, count_b[26] = {0};
        for (int i = 0; i < a.length(); i++)
            count_a[a[i] - 'a']++;
        for (int i = 0; i < b.length(); i++)
            count_b[b[i] - 'a']++;
        for (int i = 0; i < 26; i++)
        {
            int min_count = min(count_a[i], count_b[i]);
            for (int j = 0; j < min_count; j++)
                cout << (char)((int)'a' + i);
        }
        cout << endl;
    }

    return 0;
}
