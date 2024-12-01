#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n0, n1, n2, n3;
    while (cin >> n0 >> n1 >> n2 >> n3)
    {
        if (n0 == 0 && n1 == 0 && n2 == 0 && n3 == 0) break;
        int ans = 0;
        // turn the dial clockwise 2 full turns
        ans += 720;
        //stop at the first number of the combination
        ans += ((40 + n0 - n1) % 40) * 9;
        // turn the dial counter-clockwise 1 full turn
        ans += 360;
        // continue turning counter-clockwise until the 2nd number is reached
        ans += ((40 + n2 - n1) % 40) * 9;
        // turn the dial clockwise again until the 3rd number is reached
        ans += ((40 + n2 - n3) % 40) * 9;
        cout << ans << endl;
    }

    return 0;
}