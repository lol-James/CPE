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

int main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string str; getline(cin, str);
        int count[10] = {0}, last;
        for (int i = 0; i < str.length(); i++) {
            for (int j = 0; j < note.length(); j++) {
                if (note[j] == str[i]) {
                    for (int k = 0; k < 10; k++) {
                        if (i == 0 || finger[j][k] - finger[last][k] == 1) {
                            count[k] += finger[j][k];
                        }
                    }
                    last = j;
                    break;
                }
            }
        }
        
        for (int i = 0; i < 10; i++) {
            cout << count[i];
            if (i != 9) cout << " ";
            else cout << endl;
        }
    }    


    return 0;
}
