#include <iostream>

using namespace std;

/**
 * 1 6 : 1 2 2 3 3 3                    Ans:3
 * 3 10: 3 3 3 4 4 4 4 5 5 5            Ans:5  
 * 3 14: 3 3 3 4 4 4 4 5 5 5 5 5 6 6    Ans:6 
*/

int main()
{
    long long int a, b, t;
    while (cin >> a >> b)
    {
        t = a;
        while (a < b) a += ++t;
        cout << t << endl;
    }

    return 0;
}