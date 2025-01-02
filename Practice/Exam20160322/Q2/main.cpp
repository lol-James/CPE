#include <bits/stdc++.h>

using namespace std;

int main() {
    string str = "=-0987654321`\\][POIUYTREWQ';LKJHGFDSA/.,MNBVCXZ";
    map<char, char> mp;
    for (int i = 0; i < str.size() - 1; i++) mp[str[i]] = str[i + 1];
    while (getline(std::cin, str)) {
        for (auto& i : str) {
            if (mp.find(i) == mp.end()) cout << i;
            else cout << mp[i];
        }
        cout << endl;
    }

    return 0;
}