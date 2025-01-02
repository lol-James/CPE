#include <bits/stdc++.h>

using namespace std;

/**
 * Give seq. a_n
 * Find a_i - a_j max (i < j)
 * 
 * 技巧：運用set會自動排序的特性來做
 * 使用兩個set（st1 和 st2）
 * st1 紀錄已經出現過的學生成績，*st1.rbegin() 的值即為目前為止最高分數。
 * 當有新同學加入時（分數 x），只要計算 (*st1.rbegin()) – x 的值，即為新同學與所有老同學的分數差距最大值。
 * 再把這個分數差距值紀錄於 st2
 * 最後 *st2.rbegin() 即為答案。
**/

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        set<int> set1, set2;
        int score; cin >> score;
        set1.insert(score);
        for (int i = 1; i < n; i++) {
            cin >> score;
            set2.insert(*set1.rbegin() - score);
            set1.insert(score);
        }
        cout << *set2.rbegin() << endl;
    }

    return 0;
}