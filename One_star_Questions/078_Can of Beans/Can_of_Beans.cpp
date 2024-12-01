#include <bits/stdc++.h>
using namespace std;

class Date
{
public:
    long long yy, mm, dd;
    Date(long long yy = 0, long long mm = 0, long long dd = 0)
        : yy(yy), mm(mm), dd(dd) {}
    bool isValidDate()
    {
        int mday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (((yy % 4 == 0 && yy % 100 != 0)) || (yy % 400 == 0)) mday[2] = 29;
        if (mm < 1 || mm > 12) return false;
        if (dd < 1 || dd > mday[mm]) return false;
        return true;
    }
};

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        long long c, x, y, z;
        cin >> c >> x >> y >> z;

        vector<Date> v;

        if (Date(c * 100 + x, y, z).isValidDate()) v.push_back(Date(c * 100 + x, y, z));
        if (Date(c * 100 + x, z, y).isValidDate()) v.push_back(Date(c * 100 + x, z, y));
        if (Date(c * 100 + y, x, z).isValidDate()) v.push_back(Date(c * 100 + y, x, z));
        if (Date(c * 100 + y, z, x).isValidDate()) v.push_back(Date(c * 100 + y, z, x));
        if (Date(c * 100 + z, y, x).isValidDate()) v.push_back(Date(c * 100 + z, y, x));
        if (Date(c * 100 + z, x, y).isValidDate()) v.push_back(Date(c * 100 + z, x, y));

        if (v.empty())
        {
            cout << "-1\n";

        }
        else
        {
            sort(v.begin(), v.end(), [](const Date& a, const Date& b) {
                if (a.yy != b.yy) return a.yy < b.yy;
                if (a.mm != b.mm) return a.mm < b.mm;
                return a.dd < b.dd;
            });
            printf("%02lld %02lld %02lld\n", v[0].yy % 100, v[0].mm, v[0].dd);
        }
    }

    return 0;
}