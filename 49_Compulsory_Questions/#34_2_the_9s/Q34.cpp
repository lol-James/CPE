#include <iostream>
#include <string>

using namespace std;

/**
 * 9的倍數判別法：各個位數相加後為9的倍數
 * degree求法：
 * 1) 已知一個數n為9的倍數
 * 2) 一直重複將各個位數相加直到變成9
 * 3) 共加了x次
 * 4) 則degree = x + 1
**/

int sum_digit(string num);
int sum_digit(int num);

int main()
{
    string num;
    while (cin >> num)
    {
        if (num == "0")
            break;
        int count = 1;
        int n = sum_digit(num);
        if (n % 9)
        {
            cout << num << " is not a multiple of 9." << endl;
            continue;
        }
        while (n != 9)
        {
            n = sum_digit(n);
            count++;
        }
        cout << num << " is a multiple of 9 and has 9-degree " << count << "." << endl;
    }

    return 0;
}

int sum_digit(string num)
{
    int sum = 0;
    for (int i = 0; i < num.length(); i++)
        sum += num[i] - '0';

    return sum;
}

int sum_digit(int num)
{
    int sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}