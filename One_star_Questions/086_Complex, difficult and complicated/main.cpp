#include <bits/stdc++.h>

using namespace std;

/**
 * 複數的n次冪=>棣美弗定理
 * 複數平面 θ=arctan(b/a) 
 * b/a會出現分數的情況，都不討論，只算簡單的就好
 * 根據範例測資，找出規則
*/

int main()
{
    int m;
    cin >> m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        if (b == 0) cout << 1 << endl;
        else if (a == 0) cout << 2 << endl;
        else if (abs(a) == abs(b)) cout << 4 << endl;
        else cout << "TOO COMPLICATED" << endl; 
    }

    return 0;
}