#include <iostream>
using namespace std;

/**
 * 速度v；時間t
 * 等速度運動
 * 求2t時的位移
**/

int main()
{
    int v, t;
    while (cin >> v >> t) 
        cout << v * t * 2 << endl;
        
    return 0;
}