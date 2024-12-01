#include <bits/stdc++.h>
using namespace std;

/**
 * 題意：
 * 使用bubble sort共需交換幾次？
**/

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int l;
        cin >> l;
        int a[l];
        for (int i = 0; i < l; i++) cin >> a[i];
        int count = 0;
        for (int i = 1; i < l; i++)
            for (int j = 0; j < l - i; j++)
                if (a[j] > a[j + 1])
                    swap(a[j], a[j + 1]), count++;
        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }

    return 0;
}