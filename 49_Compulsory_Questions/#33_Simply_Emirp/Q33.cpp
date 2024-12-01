#include <iostream>
using namespace std;

/**
 * prime:質數
 * emirp:本身為質數且翻轉後的數也是質數(兩數不可相同)
**/

bool is_prime(int n);
int reverse(int n);

int main()
{
    int n;
    while (cin >> n)
    {
        if (!is_prime(n))
            cout << n << " is not prime." << endl;
        else if (is_prime(reverse(n)) && n != reverse(n))
            cout << n << " is emirp." << endl;
        else
            cout << n << " is prime." << endl;
    }

    return 0;
}

bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int reverse(int n)
{
    int reverse_n = 0;

    while (n)
    {
        reverse_n = reverse_n * 10 + n % 10;
        n /= 10;
    }

    return reverse_n;
}