#include <bits/stdc++.h>
using namespace std;

long long mod;

/**
 *  {(F_n+1, F_n), (F_n, F_n-1)} = {(1, 1), (1 ,0)}^n 
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

inline Matrix quickpow(Matrix a, int k)
{
    Matrix result;
    result.a[0][0] = result.a[1][1] = 1;    // 初始化為identity matrix
    while (k)
    {
        if (k & 1)  // k is odd
            result = result * a;
        k >>= 1;    // k /= 2
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
            mod = 1 << m;   // mod = 2^m;
            cout << quickpow(A, n).a[0][1] << endl;
        }
    }

    return 0;
}