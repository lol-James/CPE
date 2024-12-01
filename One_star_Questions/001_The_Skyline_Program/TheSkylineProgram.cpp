#include <bits/stdc++.h>
using namespace std;

/**
 * 建築物以(Li Hi Ri)表示
 * 根據輸入的多個建築物描繪出輪廓
 * 一個接一個輸出高度有變動的坐標點並以空白隔開
 * (最後輪廓向量的最後一個數一定為0，don't care)
**/

int main()
{
    int Li, Hi, Ri, min = 10000, max = 0;   // min: 最左  max: 最右
    int height[10005] = {0};
    while (cin >> Li >> Hi >> Ri)
    {   
        min = Li < min ? Li : min;
        max = Ri > max ? Ri : max;
        // 調整最高高度
        for (int i = Li; i < Ri; ++i)
            height[i] = Hi > height[i] ? Hi : height[i];
    }
    int h = -1;
    for (int i = min; i <= max; ++i)
        if (height[i] != h)
        {
            cout << i << " " << height[i] << " ";
            h = height[i];
        }

    return 0;
}