// Given the row number n. Print the n-th row of Pascal’s triangle.

#include <iostream>

using namespace std;

long long binomialCoeff(int n, int k)
{
    long long res = 1;
    if (k > n - k)
    {
        k = n - k;
    }
    for (int i = 0; i < k; i++)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
void printRow(int r)
{
    for (int i = 1; i <= r; i++)
    {
        cout << binomialCoeff(r - 1, i - 1) << " ";
    }
    cout << endl;
}

int main()
{
    int r;
    cout << " Enter the row and column number (1-based) : " << endl;
    cin >> r;
    printRow(r);
    return 0;
}