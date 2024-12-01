#include <bits/stdc++.h>
using namespace std;

// 直接遍歷句子統計單字即可

int main()
{
    int K, E, set_count = 1;
    while (cin >> K >> E)
    {
        string keyword[K];
        for (int i = 0; i < K; i++) cin >> keyword[i];
        string s;
        getline(cin, s);        // erase '\n'
        string excuse[E];
        int count[20] = {0};
        int max = 0;
        for (int i = 0; i < E; i++)
        {
            getline(cin, s);
            excuse[i] = s;
            int index = 0;
            string word = "";
            while (index < s.size())
            {
                char c = tolower(s[index]);
                if (isalpha(c))
                {
                    word += c;
                }
                else
                {
                    for (int k = 0; k < K; k++)
                    {
                        if (word == keyword[k])
                        {
                            count[i]++;
                            break;
                        }
                    }
                    word = "";
                }
                index++;
            }
            max = count[i] > max ? count[i] : max;
        }
        cout << "Excuse Set #" << set_count++ << endl;
        for (int i = 0; i < E; i++)
        {
            if (count[i] == max)
            {
                cout << excuse[i] << endl;
            }
        }
        cout << endl;
    }

    return 0;
}