// Grid Unique Paths | Count paths from left-top to the right bottom of a matrix  ( Using Permutation and combination )

#include <iostream>
using namespace std;

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        // Calculate C(m+n-2, m-1) using long long to avoid overflow
        long long result = 1;
        int N = m + n - 2;         // total steps
        int r = min(m - 1, n - 1); // choose the smaller for efficiency

        for (int i = 1; i <= r; ++i)
        {
            result = result * (N - r + i) / i;
        }

        return (int)result;
    }
};

int main()
{
    Solution sol;
    int m = 3, n = 7;
    cout << "Unique paths from (0,0) to (" << m - 1 << "," << n - 1 << ") = " << sol.uniquePaths(m, n) << endl;
    return 0;
}
