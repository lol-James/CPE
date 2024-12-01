#include <bits/stdc++.h>
using namespace std;

/**
 * 本題會有負數的情況出現
 * 定義：
 * n < 0, then n! = (n + 1)! / (n + 1)
 * (-1)! = 0!/0 = 1/0 = inf
 * (-2)! = (-1)!/-1 = -inf
 * (-3)! = (-2)!/-2 = inf
 * (-4)! = (-3)!/-3 = -inf...
 * => if n < 0 && (-1 * n) % 2 == 0 then n! = -inf(underflow)
 * => if n < 0 && (-1 * n) % 2 == 1 then n! = inf(overflow)
**/

long long fact[14];
void initFact()
{
    fact[0] = 1;
    fact[1] = 1;
    for (int i = 2; i <= 13; i++)
        fact[i] = i * fact[i - 1];
}

int main()
{
    initFact();
    long long num;
    while (cin >> num)
    {
        if (num >= 0)
        {
            if (num <= 13)
            {
                if (fact[num] < 10000) cout << "Underflow!\n";
                else cout << fact[num] << endl;
            }
            else
            {
                cout << "Overflow!\n";
            }
        }
        else
        {
            if ((num * -1) % 2 == 1) cout << "Overflow!\n";
            else cout << "Underflow!\n"; 
        }
    }

    return 0;
}