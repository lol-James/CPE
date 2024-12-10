#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 找中位數，求最小距離離和

int main()
{
    int num, r, value;

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> r;
        vector<int> v;
        int middle = r / 2;
        for (int j = 0; j < r; j++)
        {
            cin >> value;
            v.push_back(value);
        }
        sort(v.begin(), v.end());
        int home = v[middle], sum = 0;
        for (int k = 0; k < v.size(); k++) sum += abs(home - v[k]);
        cout << sum << endl;
    }

    return 0;
}