// You are given an array of prices where prices[i] is the price of a given stock on an ith day.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int min = arr[0];
    int p = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        int num = arr[i] - min;
        if (p < num)
        {
            p = num;
        }
    }
    cout << p << endl;
    return 0;
}