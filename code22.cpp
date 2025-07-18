// Two Sum : Check if a pair with given sum exists in Array

#include <iostream>
#include <vector>

using namespace std;

int check(vector<int> &arr, int num, int j)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == num && i != j)
        {
            return i;
        }
    }
    return -1;
}
void twoSum(vector<int> &arr, int target)
{
    int num = arr[1];
    for (int i = 1; i < arr.size(); i++)
    {
        int n = check(arr, (target - arr[i]), i);
        if (n != -1)
        {
            cout << "YES" << endl;
            cout << "[" << i << ", " << n << "]" << endl;
            break;
        }
        else
        {
            cout << "NO" << endl;
            cout << "[" << -1 << ", " << -1 << "]" << endl;
            break;
        }
    }
}
int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 15;
    twoSum(arr, target);
    return 0;
}