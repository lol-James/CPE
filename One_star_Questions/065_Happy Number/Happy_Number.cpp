#include <bits/stdc++.h>
using namespace std;

/**
 * 平方和做到最後變成1:happy number
 * 平方和做到出現重複數字，形成循環，永遠不可能到得到1
**/

inline int squareSum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}

int main()
{
    int T, cases = 1;
    cin >> T;
    while (T--)
    {   
        long long n;
        cin >> n;
        cout << "Case #" << cases++ << ": " << n;
        set<long long> checked;
        checked.insert(n);
        bool flag = true;
        long long num = n;
        while (num != 1)
        {
            num = squareSum(num);
            if (checked.count(num))
            {
                flag = false;
                break;
            }
            checked.insert(num);
        }
        if (flag) cout << " is a Happy number.\n";
        else cout << " is an Unhappy number.\n";
    }

    return 0;
}