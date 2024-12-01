#include <iostream>
using namespace std;

/**
 * 條件1. 是否是以“中心點”對稱的矩陣
 * 條件2. 每個元素均不可為負數
 * 必須符合以上兩個條件才算是Symmetric
 * 測資很大要用long long
**/

int main()
{
    int num, size;
    string s;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> s >> s >> size; // 利用s把 N = 吃掉
        long long int a[size][size];
        for (int j = 0; j < size; j++)
            for (int k = 0; k < size; k++)
                cin >> a[j][k];
        bool flag = true;
        for (int row = 0; row < size; row++)
        {
            for (int col = 0; col < size; col++)
            {
                if (!((a[row][col] == a[size - 1 - row][size - 1 - col]) &&
                    (a[row][col] >= 0)))
                {
                    flag = false;
                    break;
                }

            }
            if (!flag) break;
        }

        if (flag)
            cout << "Test #" << i + 1 << ": Symmetric." << endl;
        else
            cout << "Test #" << i + 1 << ": Non-symmetric." << endl;
    }

    return 0;
}
