#include <bits/stdc++.h>
using namespace std;

struct TimeFormat
{
    string time;    // 結束時間
    int start;
    int end;
};

bool cmp(TimeFormat &x, TimeFormat &y)
{
    if (x.start != y.start)
        return x.start < y.start;
    return x.end < y.end;
}

void reset(TimeFormat t[])
{
    t[0].time = "10:00";
    t[0].start = 600;
    t[0].end = 600;
    t[1].time = "18:00";
    t[1].start = 1080;
    t[1].end = 1080;
}

int main()
{
    TimeFormat t[102];
    int cases = 0, events;
    string line;
    while (cin >> events)
    {
        cases++;
        getline(cin, line); // erase '\n'
        int count = 2;
        reset(t);
        while ((count - 2) < events)
        {
            getline(cin, line);
            t[count].start = atoi(line.substr(0, 2).c_str()) * 60;
            t[count].start += atoi(line.substr(3, 2).c_str());
            t[count].end = atoi(line.substr(6, 2).c_str()) * 60;
            t[count].end += atoi(line.substr(9, 2).c_str());
            t[count].time = line.substr(6, 5);
            count++;
        }
        
        sort(t, t + events + 2, cmp);
        
        int longest_nap = 0;
        string longest_nap_start = "";
        // 插入n個行程，會形成n+1個nap time
        for (int i = 0; i < events + 1; i++)
        {
            if ((t[i + 1].start - t[i].end) > longest_nap)
            {
                longest_nap_start = t[i].time;
                longest_nap = (t[i + 1].start - t[i].end);
            }
        }

        cout << "Day #" << cases << ": the longest nap starts at ";
        cout << longest_nap_start << " and will last for ";
        if (longest_nap < 60)
            cout << longest_nap;
        else 
            cout << (longest_nap / 60) << " hours and " << (longest_nap % 60);
        cout << " minutes." << endl;
    }

    return 0;
}