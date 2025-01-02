#include <bits/stdc++.h>
using namespace std;

char mp[1000][1000];
bool visited_flag[1000][1000];
int row, col;

void dfs(int x, int y, char current_char) {
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    
    visited_flag[x][y] = true;
    
    for(int dir = 0; dir < 4; dir++) {
        int new_x = x + dx[dir];
        int new_y = y + dy[dir];
        if(new_x >= 0 && new_x < row && new_y >= 0 && new_y < col) {
            if(mp[new_x][new_y] == current_char && !visited_flag[new_x][new_y]) {
                dfs(new_x, new_y, current_char);
            }
        }
    }
}

int main(){
    int n; cin >> n;
    for(int cases = 1; cases <= n; cases++) {
        cin >> row >> col;
        for(int i = 0; i < row; i++) {
            string s; cin >> s;
            for(int j = 0; j < col; j++) {
                mp[i][j] = s[j];
            }
        }
        
        memset(visited_flag, 0, sizeof(visited_flag));
        int letters[26] = {0};
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(!visited_flag[i][j]) {
                    char current_char = mp[i][j];
                    letters[current_char - 'a']++;
                    dfs(i, j, current_char);
                }
            }
        }
        
        vector<pair<char, int>> language_counts;
        for(int j = 0; j < 26; j++) {
            if(letters[j] > 0) {
                language_counts.emplace_back(make_pair('a' + j, letters[j]));
            }
        }
        sort(language_counts.begin(), language_counts.end(), 
        [](const pair<char, int> &a, const pair<char, int> &b){
            if(a.second != b.second) return a.second > b.second;
            return a.first < b.first;
        });
        
        cout << "World #" << cases << "\n";
        for(auto i : language_counts) {
            cout << i.first << ": " << i.second << "\n";
        }
    }
    
    return 0;
}
