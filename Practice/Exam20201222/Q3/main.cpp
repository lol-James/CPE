#include <iostream>
using namespace std;

/**
 * 統計一段曲子中，每隻手指共按了幾下按鍵
 * 1) 先建好指法二維陣列 const int finger[14][10]
 * 2) 遍歷輸入的每一個音並找到對應的指法
 * 3) 分析指法：
 *    if 本音為整段曲子的第一個音 or
 *       前一個音不按但當前音要按: count累加一次
 * 4) 分析完指法記得把前一個音記錄下來
 * 5) 輸出結果
**/

const string note = "cdefgabCDEFGAB";
const int finger[14][10] = {
    {0, 1, 1, 1, 0, 0, 1, 1, 1, 1},
    {0, 1, 1, 1, 0, 0, 1, 1, 1, 0},
    {0, 1, 1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 0, 0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 1, 1, 1, 0},
    {1, 1, 1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 0, 0, 1, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
};

int main()
{
    int num;
    string str;
    int last;

    while (cin >> num)
    {
        cin.get();
        for (int i = 0; i < num; i++)
        {
            int count[10] = {0};
            getline(cin, str);
            for (int j = 0; j < str.length(); j++) 
                for (int k = 0; k < 14; k++)
                    if (str[j] == note[k])
                    {
                        for (int l = 0; l < 10; l++) // 分析指法
                            if (j == 0 || finger[k][l] - finger[last][l] == 1)
                                count[l] += finger[k][l];
                        last = k; // 記錄前一個音
                        break;
                    }

            for (int j = 0; j < 10; j++)
            {
                cout << count[j];
                if (j != 9) cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
