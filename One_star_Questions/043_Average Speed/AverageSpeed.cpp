#include <bits/stdc++.h>
using namespace std;

int main()
{
    string buffer;
    int count, h, m, s, t0 = 0, t1 = 0;
    double distance = 0.0, v0 = 0.0, v1 = 0.0;
    while (getline(cin, buffer))
    {   
        // sscanf會return成功讀入了幾個字元
        count = sscanf(buffer.c_str(), "%d:%d:%d %lf", &h, &m, &s, &v1);
        t1 = h * 3600 + m * 60 + s;
        distance += v0 * (t1 - t0) / 3600.0;
        t0 = t1;
        // count == 3代表v1沒有存入數字
        if (count == 3) printf("%02d:%02d:%02d %.2lf km\n", h, m, s, distance);
        else v0 = v1;
    }

    return 0;
}
