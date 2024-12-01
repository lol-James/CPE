#include <bits/stdc++.h>
using namespace std;

/**
 * 找規律：注意為S型數(右上往左下接著左下往右上......)
 * sum = 2	    3	    4	        5	            6
 *       1/1	1/2	2/1	3/1	2/2	1/3	1/4	2/3	3/2	4/1	5/1	4/2	3/3	2/4	1/5
**/

int main()
{   
    int num;
    while (cin >> num)
    {   
        int i = 1;
        while ((i * (i + 1) / 2) < num) i++;
        i--;
        int sum = i + 2;
        int numerator, denominator;
        if (sum % 2 == 1)
        {
            numerator = (num - (i * (i + 1) / 2));
            denominator = sum - numerator;
            cout << "TERM " << num << " IS " << numerator << "/" << denominator << endl;
        }
        else
        {
            denominator = (num - (i * (i + 1) / 2));
            numerator = sum - denominator;
            cout << "TERM " << num << " IS " << numerator << "/" << denominator << endl;
        }
    }

    return 0;
}