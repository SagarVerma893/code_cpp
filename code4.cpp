// Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

#include <iostream>

using namespace std;

long long binomialCoeff(int n, int k)
{
    long long res = 1;

    if (k > n - k)
        k = n - k;

    for (int i = 0; i < k; i++)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main()
{
    int r, c;
    cout << "Enter the row and column number (1-based i) :";
    cin >> r >> c;
    if (c > r || r <= 0 || c <= 0)
    {
        cout << "Invalid position ";
    }
    cout << "Element at position (" << r << ", " << c << ") is: " << binomialCoeff(r - 1, c - 1) << endl;
    return 0;
}