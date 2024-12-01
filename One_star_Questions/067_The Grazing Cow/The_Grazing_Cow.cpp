#include <bits/stdc++.h>

using namespace std;

/**
 * 給兩個焦點距離與長軸
 * 計算橢圓形面積
**/ 

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {   
        double D, L;
        cin >> D >> L;
        double major_diameter = L / 2.0;     // 長軸
        double c = D / 2.0;     // 焦距
        double minor_diameter = sqrt(major_diameter * major_diameter - c * c); // 短軸
        double area = major_diameter * minor_diameter * M_PI;
        printf("%.3f\n", area); 
    }

    return 0;
}