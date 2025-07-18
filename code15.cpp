// Search in a 2D matrix

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int N = mat.size();
    int M = mat[0].size();

    int low = 0, high = N * M - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int row = mid / M;
        int col = mid % M;
        if (mat[row][col] == target)
        {
            return true;
        }
        else if (mat[row][col] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    int target = 8;

    if (searchMatrix(mat, target))
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    return 0;
}