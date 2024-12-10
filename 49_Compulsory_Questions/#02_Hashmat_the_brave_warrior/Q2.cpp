#include <iostream>

using namespace std;

// 使用 long long int

int main()
{
    long long int a, b;

    while (cin >> a >> b)
        cout << abs(a - b) << endl;

    return 0;
}