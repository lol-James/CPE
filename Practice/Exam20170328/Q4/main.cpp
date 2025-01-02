#include <bits/stdc++.h>

using namespace std;

int main() {
    int T; cin >> T;
    while(T--) { 
        long long N; cin >> N;
        
        // 特例處理
        if(N == 0) {
            cout << "10\n";
            continue;
        }
        if(N == 1) {
            cout << "1\n";
            continue;
        }
        
        vector<int> factors;        
        // 從 9 到 2 嘗試分解 N
        for(int d = 9; d >= 2; d--){
            while(N % d == 0){
                factors.push_back(d);
                N /= d;
            }
        }
        
        // 如果分解後 N 不等於 1，則無法完全分解
        if(N != 1){
            cout << "-1\n";
            continue;
        }
        
        // 將因數排序以構造最小的 Q
        sort(factors.begin(), factors.end());
        
        // 將因數轉換為字串
        string Q = "";
        for(auto d : factors){
            Q += to_string(d);
        }
        
        cout << Q << "\n";
    }
    
    return 0;
}
