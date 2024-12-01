#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cin >>c;
    while (c--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int score;
        for (int i = 0; i < n; i++)
        {
            cin >> score;
            v.push_back(score);
        }
        double sum = 0;
        for (auto &i : v) sum += i;
        double avg = sum / n;
        int count = 0;
        for (auto &i : v) if (i > avg) count++;
        double percent = (double)count / n * 100.0;
        printf("%.3f%%\n", percent);
    }

    return 0;
}