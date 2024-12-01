#include <bits/stdc++.h>

using namespace std;

int main()
{   
    // 建合數表，同時存質數
    vector<int> primes;
    // true: 合數；false：質數
    bool compositeTable[33000] = {true, true, false};
    for (int i = 2; i < 33000; i++) {
        if (compositeTable[i] == false) {
            primes.push_back(i);
            for (int j = i + i; j < 33000; j += i) {
                compositeTable[j] = true;
            }
        }
    }

    int n;
    while (cin >> n) {
        if (n == 0) break;
        int count = 0;
        for (auto i : primes) {
            int j = n - i;
            if (j < i) {
                break;
            }
            if (compositeTable[j] == false) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}