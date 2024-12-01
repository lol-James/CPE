#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, vector<double>> mp;
    /**
     * 因為可能跨日，所以把兩天劃分成7個時間區間
     * =>      0~8    8~18  18~22 22~8  8~18  18~22 22~24
    **/
    mp['A'] = {0.02, 0.10, 0.06, 0.02, 0.10, 0.06, 0.02};
    mp['B'] = {0.05, 0.25, 0.15, 0.05, 0.25, 0.15, 0.05};
    mp['C'] = {0.13, 0.53, 0.33, 0.13, 0.53, 0.33, 0.13};
    mp['D'] = {0.17, 0.87, 0.47, 0.17, 0.87, 0.47, 0.17};
    mp['E'] = {0.30, 1.44, 0.80, 0.30, 1.44, 0.80, 0.30};
    // b[]為(開始/結束)時間換算成距離開始日0:00的的分鐘數
    int b[] = {480, 1080, 1320, 1920, 2520, 2760, 2880};
    char step;
    int h1, m1, h2, m2;
    string phone;
    while (cin >> step)
    {
        if (step == '#') break;
        double cost = 0.0;
        int time[7] = {0};
        cin >> phone >> h1 >> m1 >> h2 >> m2;
        m1 += h1 * 60;
        m2 += h2 * 60;
        if (m2 <= m1) m2 += 24 * 60;
        for (int i = 0; i < 7; i++)
        {
            if (m1 <= b[i])
            {
                if (m2 <= b[i])     
                {
                    time[i] = m2 - m1;
                    cost += mp[step][i] * time[i];
                    break;
                }
                else            
                {
                    time[i] = b[i] - m1;
                    cost += mp[step][i] * time[i];
                    m1 = b[i];
                }
            }
        }
        printf("%10s%6d%6d%6d%3c%8.2f\n", 
            phone.c_str(), time[1] + time[4], time[2]+ time[5], time[0] + time[3] + time[6], step, cost);
    }

    return 0;
}