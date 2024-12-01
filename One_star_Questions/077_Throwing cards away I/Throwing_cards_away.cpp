#include <bits/stdc++.h>

using namespace std;

/**
 * 以下為 std::queue 內常用的成員函式
 * push：把值加到尾巴
 * pop：移除頭的值
 * back：回傳尾巴的值
 * front：回傳頭的值
 * size：回傳目前長度
 * empty：回傳是否為空
**/

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0) break;
        queue<int> q;
        for(int i = 1; i <= n; i++) q.push(i);
        cout << "Discarded cards:";
        for (int i = 0; i < n - 1; i++)
        {
            if (i != 0) cout << ",";
            cout << " " << q.front();
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout << endl;
        cout << "Remaining card: " << q.front() << endl;
    }

    return 0;
}