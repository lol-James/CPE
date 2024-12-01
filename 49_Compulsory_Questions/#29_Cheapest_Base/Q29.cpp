#include <iostream>
using namespace std;

int main()
{
    int n, t, num;
    int cost_char[36] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Case " << i + 1 << ":" << endl;
        for (int j = 0; j < 36; j++) cin >> cost_char[j];
        cin >> t;
        while (t--)
        {
            cin >> num;
            int cheapest = -1, cheap_count = 0, temp;
            int cost_base[37] = {0};
            for (int base = 2; base <= 36; base++)
            {
                temp = num;
                while (temp)
                {
                    cost_base[base] += cost_char[temp % base];
                    temp /= base;
                }
                if (cheapest == -1 || cost_base[base] < cheapest) // 有更便宜的
                {
                    cheapest = cost_base[base];
                    cheap_count = 1;
                }
                else if (cost_base[base] == cheapest) // 同為最便宜
                {
                    cheap_count++;
                }
            }
            cout << "Cheapest base(s) for number " << num << ": ";
            for (int base = 2; base <= 36; base++)
            {
                if (cost_base[base] == cheapest)
                {
                    cout << base;
                    cheap_count--;
                    if (cheap_count == 0)
                        cout << endl;
                    else
                        cout << " ";
                }
            }
        }
    }

    return 0;
}