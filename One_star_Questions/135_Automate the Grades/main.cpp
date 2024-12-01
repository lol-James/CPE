#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int cases = 1; cases <= n; ++cases) {
        double term1, term2, finalExam, attendance;
        double tests[3];
        cin >> term1 >> term2 >> finalExam >> attendance >> tests[0] >> tests[1] >> tests[2];
        sort(tests, tests + 3);
        double test = (tests[1] + tests[2]) / 2;
        double grade = term1 + term2 + finalExam + attendance + test;
        char letter;
        if (grade >= 90) letter = 'A';
        else if (grade >= 80) letter = 'B';
        else if (grade >= 70) letter = 'C';
        else if (grade >= 60) letter = 'D';
        else letter = 'F';
        cout << "Case " << cases << ": " << letter << endl;
    }

    return 0;
}