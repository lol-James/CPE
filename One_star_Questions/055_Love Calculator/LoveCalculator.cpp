#include <bits/stdc++.h>
using namespace std;

inline int sumDigits(int value)
{
    int sum = 0;
    while (value)
    {
        sum += value % 10;
        value /= 10;
    }
    return sum;
}

inline int getValue(string &name)
{
    int value = 0;
    for (auto &ch : name) if (isalpha(ch)) value += tolower(ch) - 'a' + 1;
    while (value >= 10) value = sumDigits(value);
    return value;
}

int main()
{
    string name1, name2;
    while (getline(cin, name1))
    {
        getline(cin, name2);
        double value1 = getValue(name1), value2 = getValue(name2);
        printf("%.2f %%\n", min(value1, value2) / max(value1, value2) * 100); 
    }

    return 0;
}