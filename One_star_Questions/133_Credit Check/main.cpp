#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while (n--) {
        string str;
        int num, sum1 = 0, sum2 = 0;
        for (int i = 0; i < 4; i++) {
            cin >> str;

            num = 2 * (str[0] - '0');
            num = num / 10 + num % 10;
            sum1 += num;

            num = (str[1] - '0');
            num = num / 10 + num % 10;
            sum2 += num;

            num = 2 * (str[2] - '0');
            num = num / 10 + num % 10;
            sum1 += num;

            num = (str[3] - '0');
            num = num / 10 + num % 10;
            sum2 += num;

        }
        
        if ((sum1 + sum2) % 10 == 0) {
            cout << "Valid" << endl;
        }
        else {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}