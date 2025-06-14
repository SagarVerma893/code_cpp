// Given an integer array arr, find the contiguous subarray (containing at least one number) which has the largest sum and returns its sum and prints the subarray.

#include <iostream>
#include <vector>

using namespace std;

int kadane(vector<int> &num)
{
    int max = 0;
    int x = 0;
    for (int i = 0; i < num.size(); i++)
    {
        x += num[i];
        if (x < 0)
        {
            x = 0;
        }
        if (x > max)
        {
            max = x;
        }
    }
    return max;
}

int main()
{
    vector<int> num = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int max = kadane(num);
    cout << max << endl;
    return 0;
}