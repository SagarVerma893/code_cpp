// Find the repeating and missing numbers

#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &nums)
{
    int slow = nums[0];
    int fast = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    slow = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int findMissing(vector<int> &nums, int duplicate)
{
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int num : nums)
    {
        actualSum += num;
    }

    return duplicate + expectedSum - actualSum;
}

int main()
{
    vector<int> arr = {3, 1, 2, 5, 3};

    int duplicate = findDuplicate(arr);
    int missing = findMissing(arr, duplicate);

    cout << "Duplicate Number : " << duplicate << endl;
    cout << "Missing Number : " << missing << endl;

    return 0;
}
