#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s)
{   
    int len = s.length();
    if (len == 0) return true;
    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - 1 - i]) return false;
    return true;
}

int main()
{
    string input;
    while (getline(std::cin, input))
    {
        if (input == "DONE") break;
        string line = "";
        for (auto &ch : input)
            if (isalpha(ch)) line += toupper(ch);
        if (isPalindrome(line)) cout << "You won't be eaten!" << endl;
        else cout << "Uh oh.." << endl;
    }

    return 0;
}