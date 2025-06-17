// Find the duplicate in an array of N+1 integers
// Using the Floyd’s Cycle Detection method

#include <iostream>
#include <vector>

using namespace std;

int duplicate(vector<int> &nums)
{
    int slow = nums[0];
    int fast = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[fast];
    } while (slow != fast);

    return slow;
}

int main()
{
    vector<int> arr = {1, 3, 4, 2, 2};
    cout << duplicate(arr) << endl;
    return 0;
}
