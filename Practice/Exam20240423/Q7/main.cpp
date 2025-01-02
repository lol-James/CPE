#include <bits/stdc++.h>
using namespace std;

long long mod;

/**
 * 利用矩陣的次方求費氏數列，並搭配快速冪加速
 * {(F_n+1, F_n), (F_n, F_n-1)} = {(1, 1), (1 ,0)}^n 
**/

class Matrix
{
public:
    long long a[2][2];
    Matrix() { memset(a, 0, sizeof(a)); }
    Matrix operator*(const Matrix &b) const
    {
        Matrix result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                for (int k = 0; k < 2; k++)
                    result.a[i][j] = (result.a[i][j] + this->a[i][k] * b.a[k][j]) % mod;
        return result;
    }
};

Matrix A;

/**
 * 快速冪範例：find 2^15
 * result = 2, k = 14
 * 2^14 = 4^7
 * result = 2 * 4, k = 6
 * 4^6 = 16^3
 * result = 2 * 4 * 8 * 16, k = 2
 * 16^2 = 32^1
 * result = 2 * 4 * 8 * 16 * 32, k = 0
 * result = 2^(1+2+3+4+5)
**/
inline Matrix quickpow(Matrix a, int k)
{
    Matrix result;
    result.a[0][0] = result.a[1][1] = 1;    // 初始化為identity matrix
    while (k > 0)
    {
        if (k % 2 == 1) {
            result = result * a;
            k--;
        }
        k /= 2;
        a = a * a;
    }
    return result;
}

int main()
{
    A.a[0][0] = A.a[0][1] = A.a[1][0] = 1, A.a[1][1] = 0;
    int n, m;
    while (cin >> n >> m)
    {
        if (n == 0 || m == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            mod = (int)pow(2, m); 
            cout << quickpow(A, n).a[0][1] << endl;
        }
    }

    return 0;
}