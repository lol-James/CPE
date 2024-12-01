#include <bits/stdc++.h>
using namespace std;

/**
 * 先依題意用雙層for把4個vector建好即可
 * 注意輸出格式
**/

int main()
{
    vector<int> v2, v4, v6, v8;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if ((i + j) * (i + j) == (i * 10 + j))
                v2.push_back(i * 10 + j);
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            if ((i + j) * (i + j) == (i * 100 + j))
                v4.push_back(i * 100 + j);
    for (int i = 0; i < 1000; i++)
        for (int j = 0; j < 1000; j++)
            if ((i + j) * (i + j) == (i * 1000 + j))
                v6.push_back(i * 1000 + j);
    for (int i = 0; i < 10000; i++)
        for (int j = 0; j < 10000; j++)
            if ((i + j) * (i + j) == (i * 10000 + j))
                v8.push_back(i * 10000 + j);
    int N;
    while (cin >> N)
    {
        if (N == 2)
        {
            for (auto i : v2)
                cout << setw(2) << setfill('0') << i << endl;
        }
        else if (N == 4)
        {
            for (auto i : v4)
                cout << setw(4) << setfill('0') << i << endl;            
        }
        else if (N == 6)
        {
            for (auto i : v6)
                cout << setw(6) << setfill('0') << i << endl;
        }
        else if (N == 8)
        {
            for (auto i : v8)
                cout << setw(8) << setfill('0') << i << endl;
        }
    }

    return 0;
}