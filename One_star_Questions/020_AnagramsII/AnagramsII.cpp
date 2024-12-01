#include <bits/stdc++.h>
using namespace std;

int a[1000][26];    // 統計字母出現次數用
string s[1000];     // 記錄word用

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        memset(a, 0, sizeof(a));
        for (int i = 0; i < N; i++)
        {
            cin >> s[i];
            for (int j = 0; j < s[i].size(); j++)
                a[i][s[i][j] - 'a']++;
        }
        string test_word;
        while (cin >> test_word)
        {
            if (test_word == "END") break;
            int test_word_cnt[26] = {0};
            for (int i = 0; i < test_word.size(); i++)
                test_word_cnt[test_word[i] - 'a']++;
            int i, j, count = 0;
            cout << "Anagrams for: " << test_word << endl;
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < 26; j++)
                    if (test_word_cnt[j] != a[i][j]) break;
                if (j == 26)
                    cout << setw(3) << ++count << ") " << s[i] << endl;
            }
            if (count == 0)
                cout << "No anagrams for: " << test_word << endl;
        }
        if (T) cout << endl;
    }

    return 0;
}