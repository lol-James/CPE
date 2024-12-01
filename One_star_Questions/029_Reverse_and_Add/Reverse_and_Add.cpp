#include <bits/stdc++.h>
using namespace std;

bool doAndCheck(long long &num);

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        long long num;
        cin >> num;
        int count = 1;
        while (!doAndCheck(num)) count++;
        cout << count << " " << num << endl;
    }

    return 0;
}

bool doAndCheck(long long &num)
{
    string s = to_string(num);
    reverse(s.begin(), s.end());
    num += stoll(s);
    s = to_string(num);
    for (int l = 0, r = s.size() - 1; l < r; l++, r--)
        if (s[l] != s[r]) return false;
    return true;
}
