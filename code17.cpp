// Find the Majority Element that occurs more than N/2 times (Moore’s Voting Algorithm)

#include <iostream>
#include <vector>

using namespace std;

void majorityElement(vector<int> &nums, int N)
{
    int m = 0;
    int element = 0;
    for (int i = 0; i < N; i++)
    {
        if (m == 0)
        {
            element = nums[i];
            m++;
        }
        else if (element == nums[i])
        {
            m++;
        }
        else
        {
            m--;
        }
    }
    cout << "Majority Element :  " << element << endl;
}

int main()
{
    int N = 7;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    majorityElement(nums, N);
    return 0;
}
