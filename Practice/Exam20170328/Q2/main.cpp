#include <iostream>
using namespace std;

/**
 * 數列兩項差的絕對值是否為 n-1 ~ 1的數列
 * 宣告一個delta[n]
 * 利用index做為兩項差的絕對值
*/

int main()
{
    int n;
    while (cin >> n)
    {
        int arr[n], delta[n], i;
        for (i = 0; i < n; i++) cin >> arr[i];
        for (i = 0; i < n; i++) delta[i] = 0;
        for (i = 0; i < n - 1; i++) delta[abs(arr[i] - arr[i + 1])]++;
        for (i = 1; i < n; i++) if (delta[i] != 1) break;
        cout << ((i == n) ? "Jolly\n" : "Not jolly\n");
    }

    return 0;
}