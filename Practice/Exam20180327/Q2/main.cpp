#include <iostream>

using namespace std;

/**
 * 題目給定 X （= N – M），求 N。
 * 依題意，N = 10 * M + d0 （假設 d0 為 N 的個位數字）
 * X = N – M = 9 * M + d0
 * M = (X – d0) / 9 為整數，(X – d0) 可以被 9 整除。
*/
 
int main() {
    unsigned long long N, M, X;
    while (cin >> X && X){
        bool isFirst = true;
        for (int d0 = 9; d0 >= 0; d0--){
            if ((X - d0) % 9 == 0){
                M = (X - d0) / 9;
                N = X + M;
                if (isFirst == false) cout << " ";
                isFirst = false;
                cout << N;
            }
        }
        cout << "\n";
    }
}