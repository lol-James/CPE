#include <bits/stdc++.h>
using namespace std;

/**
 * (答案是859963392)
 * 巧妙！下一個數必定是從之前的某個數x2或x3或x5而來的
 * 因此要找第n個數(N[n])，就把前n-1個數x2,x3,x5，找出大於前項(N[n-1])的最小值。
 * 找第n個數的時候，例如：乘以2不用每次都從第0個開始乘，每次紀錄2乘到哪個位置，以後就從這個位置往後找即可。
**/

int main()
{
    unsigned long long a[1501] = {0};
    a[1] = 1;
    int p2 = 1, p3 = 1, p5 = 1;
    for (int i = 2; i <= 1500; i++)
    {
        while (a[p2] * 2 <= a[i - 1]) p2++;
        while (a[p3] * 3 <= a[i - 1]) p3++;
        while (a[p5] * 5 <= a[i - 1]) p5++;
        a[i] = min(a[p2] * 2, min(a[p3] * 3, a[p5] * 5));
    }
    cout << "The 1500'th ugly number is " << a[1500] << ".\n";

    return 0;
}