// Merge Overlapping Sub-intervals

#include <iostream>
#include <vector>

using namespace std;
void swap(int &a, int &b)
{
    int num = b;
    b = a;
    a = num;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}};
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i][1] >= arr[i + 1][0])
        {
            swap(arr[i][1], arr[i + 1][1]);
            arr.erase(arr.begin() + i + 1);
            i--;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}