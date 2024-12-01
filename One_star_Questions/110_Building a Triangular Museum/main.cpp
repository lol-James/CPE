#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases = 0, M, N;   // M：三角形的邊長 N：總共有幾層
    while (cin >> M >> N) {
        if (M == 0 && N == 0)
            break;
        
        int h = M * N - 1;  // 前置空白格數量
        cout << "Triangular Museum " << ++cases << endl;
        
        for (int i = 0; i < N; i++) {  // 處理第i層
            for (int j = 0; j < M; j++) {   // 處理第i層中的第j列，一層會有m列
                // 打印前置空白
                for (int k = 0; k < h; k++)
                    cout << ' ';
                h--;
                // 打印三角形的局部
                for (int k = 0; k <= i; k++) {  // 第i層會有i個三角形
                    // 印/
                    cout << '/';
                    // 處理三角形中間的空白，如果是底邊，就要用-封起來
                    for (int l = 0; l < 2 * j; l++)
                        cout << (j == M - 1 ? '_' : ' ');
                    /* 印\ */
                    cout << '\\';
                    // 處理兩個三角形中間的空白
                    if (k != i) {
                        for (int l = 2; l < 2 * M - 2 * j; l++)
                            cout << ' ';
                    }
                }
                // 印完一行，換行
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
