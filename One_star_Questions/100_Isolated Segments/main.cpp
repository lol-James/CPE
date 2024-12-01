#include <bits/stdc++.h>

using namespace std;

/**
 * 這題完全是在考數學...
 * 需用外積先判斷線段1的兩段點是否在線段二的兩側，反之亦然，如果皆符合，就是相交
 * 然後再考慮特殊情況，有一線段的端點恰在另一線段上，此時也算是相交
**/

struct Point {
    int x, y;
};

struct Segment {
    Point start, end;
};

// 判斷兩個線段是否相交
bool isIntersect(Segment seg1, Segment seg2) {
    // 利用pq向量與qr向量做行列式，判斷r是在pq線段的哪一邊
    auto orientation = [](Point p, Point q, Point r) {
        int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
        if (val == 0) return 0; // collinear
        return (val > 0) ? 1 : 2; // left or right
    };
    // 判斷q是否在pr線段上的輔助函式
    auto onSegment = [](Point p, Point q, Point r) {
        if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
            q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
            return true;
        return false;
    };

    Point p1 = seg1.start, q1 = seg1.end;
    Point p2 = seg2.start, q2 = seg2.end;
    
    // 如果o1 != o2，代表seg2的兩端點在seg1的兩側
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    // 如果o3 != o4，代表seg1的兩端點在seg2的兩側
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    // General case，兩個條件都符合代表相交
    if (o1 != o2 && o3 != o4)   
        return true;

    // Special Cases，有端點是在另一條線段的延伸線上，需要用輔助函式加以判斷這個點是否在這個另一條線段上
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;

    return false;
}

int main() {
    int N;
    cin >> N;
    while (N--) {
        int M;
        cin >> M;
        vector<Segment> segments(M);
        for (int i = 0; i < M; ++i) {
            cin >> segments[i].start.x >> segments[i].start.y >> segments[i].end.x >> segments[i].end.y;
        }

        int isolatedCount = 0;
        for (int i = 0; i < M; ++i) {
            bool isolated = true;
            for (int j = 0; j < M; ++j) {
                if (i != j && isIntersect(segments[i], segments[j])) {
                    isolated = false;
                    break;
                }
            }
            if (isolated) {
                isolatedCount++;
            }
        }

        cout << isolatedCount << endl;
    }

    return 0;
}
