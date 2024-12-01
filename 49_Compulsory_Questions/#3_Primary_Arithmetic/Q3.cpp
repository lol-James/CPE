#include <iostream>

using namespace std;

/**
 * 判斷有無進位的方法
 * 取個位數相加後/10，如果>=0代表要進位
 */

int main()
{
    int num1, num2;

    while (cin >> num1 >> num2)
    {
        int count = 0, temp = 0;
        if (num1 == 0 && num2 == 0)
            break;
        while (num1 || num2)
        {   
            temp += num1 % 10 + num2 % 10; 
            temp /= 10;
            if (temp)
                count++;
            num1 /= 10;
            num2 /= 10;
        }
        if (!count)
            cout << "No carry operation.\n";
        else if (count == 1)
            cout << "1 carry operation.\n";
        else
            cout << count << " carry operations.\n";
    }


    return 0;
}