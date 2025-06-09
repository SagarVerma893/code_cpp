// Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

#include <iostream>
using namespace std;

// Function to return element at position (r, c) in Pascal's Triangle
int solve_pascal(int r, int c)
{
    if (c == 0 || c == r)
        return 1;
    return solve_pascal(r - 1, c - 1) + solve_pascal(r - 1, c);
}

int main()
{
    int r, c;
    cout << "Enter the row and column number (1-based indexing): ";
    cin >> r >> c;

    // Check for invalid input
    if (c > r || r <= 0 || c <= 0)
    {
        cout << "Invalid position in Pascal's Triangle!";
        return 0;
    }

    // Convert to 0-based indexing
    cout << "Element at position (" << r << ", " << c << ") is: " << solve_pascal(r - 1, c - 1);
    return 0;
}
// Time complexity O(2^r)
