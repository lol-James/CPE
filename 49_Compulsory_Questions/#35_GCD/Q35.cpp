#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    while (a * b)
        if (a > b)
            a = a % b;
        else
            b = b % a;
    return a + b;
}

int main()
{
    int num;
    while (cin >> num)
    {
        if (num == 0)
            break;
        long long int G = 0;
        for (int i = 1; i < num; i++)
            for (int j = i + 1; j <= num; j++)
                G += GCD(i, j);
        cout << G << endl;
    }

    return 0;
}