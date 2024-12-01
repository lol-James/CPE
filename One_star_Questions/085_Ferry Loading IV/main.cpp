#include <bits/stdc++.h>

using namespace std;

/**
 * 問渡輪需跨河幾次才可將所有車子運到對面
 * 一開始是在左岸
 * 兩邊輪流走，盡量塞好塞滿再走
*/


int main()
{
    int c;
    cin >> c;
    while (c--) {
        int l, m;
        cin >> l >> m;
        l *= 100;
        queue<int> left, right;
        for (int i = 0; i < m; i++) {
            int carlength;
            string s;
            cin >> carlength >> s;
            if (s == "left") left.push(carlength);
            else right.push(carlength);
        }
        int count = 0;
        bool isLeft = true; // 渡輪是否在左邊
        while (!(left.empty() && right.empty())) {
            count++;
            int sum = 0;
            if (isLeft == true) {
                while (!left.empty() && sum + left.front() <= l) {
                    sum += left.front();
                    left.pop();
                }
                isLeft = false; 
            }
            else if (isLeft == false) {
                while (!right.empty() && sum + right.front() <= l) {
                    sum += right.front();
                    right.pop();
                }    
                isLeft = true;
            }
        }

        cout << count << endl;
    }

    return 0;
}