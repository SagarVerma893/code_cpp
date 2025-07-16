// Implement Pow(x,n) | X raised to the power N

#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    long long N = n;
    if (N < 0)
    {
        x = 1 / x;
        N = -N;
    }
    double result = 1;
    while (N > 0)
    {
        if (N % 2 == 1)
        {
            result *= x;
        }
        x *= x;
        N /= 2;
    }
    return result;
}

int main()
{
    cout.precision(5);
    cout << fixed;

    double x1 = 2.00000;
    int n1 = 10;
    cout << "pow(" << x1 << ", " << n1 << ") = " << myPow(x1, n1) << endl;

    double x2 = 2.10000;
    int n2 = 3;
    cout << "pow(" << x2 << ", " << n2 << ") = " << myPow(x2, n2) << endl;

    double x3 = 2.00000;
    int n3 = -2;
    cout << "pow(" << x3 << ", " << n3 << ") = " << myPow(x3, n3) << endl;
    return 0;
}