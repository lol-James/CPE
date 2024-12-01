#include <bits/stdc++.h>

using namespace std;

/**
 * 這題的輸出方法很特殊
 * 開頭加上
 * setlocale(LC_ALL, "en_US.UTF-8");
 * printf用%'.2lf 輸出浮點數
 * 電腦不一定支援 但是傳上去測試平台可以AC
*/

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");
    
    int n;
    cin >> n;        
    for (int t = 1; t <= n; ++t)
    {
        double total = 0, current;
        for (int i = 0; i < 12; ++i)
        {
            cin >> current;
            total += current;
        }
        printf("%d $%'.2lf\n", t, total / 12.0);
    }
}