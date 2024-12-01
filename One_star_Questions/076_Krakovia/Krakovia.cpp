#include <bits/stdc++.h>
using namespace std;

// find函數為找出第一個非數字的index
int find(char f[], int size)
{

    for (int i = 0; i < size; i++)
        if (f[i] != '0') return i;

    return size - 1;
}

int main()
{
    int N = 0;
    int F = 0; // N=總人數，F=平分人數。
    int count = 1;
    while (cin >> N >> F)
    {   
        if (N == 0 && F == 0) break;

        char sum[25];
        for (int i = 0; i < sizeof(sum); i++) sum[i] = '0';

        for (int i = 0; i < N; i++)
        {
            int c = 0; 
            char st[25] = {'0'};
            cin >> st;
            // 把剛剛所輸入的數字全部反轉，這樣方便加總。
            reverse(st, st + strlen(st)); 

            for (int j = 0; j < sizeof(sum); j++)
            {
                if (j < strlen(st))
                {
                    int temp = sum[j] - '0' + st[j] - '0' + c;
                    c = temp / 10;
                    sum[j] = temp % 10 + '0';
                }
                else
                {
                    int temp = sum[j] - '0' + c;
                    c = temp / 10;
                    sum[j] = temp % 10 + '0';
                }
            }
        }

        reverse(sum, sum + sizeof(sum)); 
        char di[25];
        for (int i = 0; i < sizeof(di); i++) di[i] = '0';
        int R = 0;
        for (int i = 1; i < sizeof(sum); i++)
        {
            di[i] = ((R * 10 + sum[i] - '0') / F) + '0';
            R = (R * 10 + sum[i] - '0') % F;
        }

        cout << "Bill #" << count++ << " costs ";
        for (int i = find(sum, sizeof(sum)); i < sizeof(sum); i++) cout << sum[i];
        cout << ": each friend should pay ";
        for (int i = find(di, sizeof(di)); i < sizeof(sum); i++) cout << di[i];
        cout << "\n\n";
    }

    return 0;
}
