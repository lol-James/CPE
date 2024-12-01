#include <bits/stdc++.h>

using namespace std;

const double vDog = 2.0, vGopher = 1.0;

struct position { double x, y; };

// 單純做比較用途而已，沒必要再開根號
double squareDistance(position a, position b)
{
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main()
{
    int n;
    position dog, gopher, temp;
    vector<position> hole;
    while (cin >> n >> gopher.x >> gopher.y >> dog.x >> dog.y)
    {   
        hole.clear();
        while (n--)
        {
            cin >> temp.x >> temp.y;
            hole.push_back(temp);
        }
        bool flag = false;  // 是否地鼠可以逃脫成功？
        for (auto &h : hole)
        {   
            // t = distance / v , then t^2 = squraeDistance / v^2
            if (squareDistance(dog, h) / (vDog * vDog) >= squareDistance(gopher, h) / (vGopher * vGopher))
            {   
                printf("The gopher can escape through the hole at (%.3f,%.3f).\n", h.x, h.y);
                flag = true;
            }
        }
        if (flag == false)
            cout << "The gopher cannot escape." << endl;
    }

    return 0;
}