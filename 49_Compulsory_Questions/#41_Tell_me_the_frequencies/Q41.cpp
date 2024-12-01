#include <iostream>
#include <algorithm>
using namespace std;

/**
 * 統計次數並排序 (33 ~ 127 ASCII characters)
 * 次數相同，ascii大在前
 * 次數不相同，次數小在前
**/

struct ch
{
    int ascii;
    int freq;
};

int main()
{
    string s;
    while (getline(cin, s))
    {
        ch allch[95]; // 127 - 33 + 1 = 95
        for (int i = 0; i < 95; i++)
        {
            allch[i].ascii = i + 32; // ascii code是從0開始
            allch[i].freq = 0;
        }

        for (int i = 0; i < s.length(); i++) allch[s[i] - 32].freq++;

        sort(allch, allch + 95, [](auto a, auto b) {
            return (a.freq == b.freq) ? a.ascii > b.ascii : a.freq < b.freq;
        });

        for (int i = 0; i < 95; i++)
            if (allch[i].freq > 0)
                cout << allch[i].ascii << " " << allch[i].freq << endl;
        cout << endl;
    }
    return 0;
}