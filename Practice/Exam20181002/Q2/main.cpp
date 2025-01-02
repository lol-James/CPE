#include <iostream>
using namespace std;

/**
 * 起始：top、north、west = 1、2、3
 * 根據翻轉方向，推論die[0] die[1] die[2]為何
 * 最後輸出die[0]
*/

int main() {
    int n;
    while (cin >> n && n) {
        int die[3] = {1, 2, 3}, temp; // top, north, west
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            if (s == "north") {
                temp = die[0];
                die[0] = 7 - die[1];
                die[1] = temp;
            }
            else if (s == "south") {
                temp = die[0];
                die[0] = die[1];
                die[1] = 7 - temp;
            }
            else if (s == "east") {
                temp = die[0];
                die[0] = die[2];
                die[2] = 7 - temp;
            }
            else if (s == "west") {
                temp = die[0];
                die[0] = 7 - die[2];
                die[2] = temp;
            }
        }

        cout << die[0] << endl;
    }
}