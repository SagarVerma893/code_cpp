// Given a matrix, your task is to rotate the matrix 90 degrees clockwise.

#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b)
{
    int num = b;
    b = a;
    a = num;
}
// transpose
void transpose(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr[0].size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

// reverse
void reverse(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr[0].size(); i++)
    {
        for (int j = 0; j < (arr[0].size() / 2); j++)
        {
            swap(arr[i][j], arr[i][arr[0].size() - 1 - j]);
        }
    }
}

// rotation = transpose + reverse

void print_table(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr[0].size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    transpose(arr);
    reverse(arr);
    print_table(arr);

    return 0;
}