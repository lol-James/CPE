#include <iostream>
using namespace std;

long long int f[40] = {0, 1};   // 大小設40就夠用了

void fib()
{
    for (int i = 2; i < 40; i++)
        f[i] = f[i - 2] + f[i - 1];
}

int main()
{
    fib();
    int n, number;
    bool flag;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        cout << number << " = ";
        flag = false;
        for (int j = 39; j >= 2; j--)
        {
            if (number >= f[j])
            {
                number -= f[j];
                cout << "1";
                flag = true;
            }
            else if (flag) // flag確保第一個輸出只會是1
            {
                cout << "0";
            }
        }
        cout << " (fib)\n";
    }

    return 0;
}