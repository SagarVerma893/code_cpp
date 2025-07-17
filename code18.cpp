// Majority Elements(&gt;N/3 times) | Find the elements that appears more than N/3 times in the array (Extended Boyer Moore’s Voting Algorithm)

#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int cnt1 = 0, cnt2 = 0;
    int el1 = 0, el2 = 0;

    // 1st pass: Find potential candidates
    for (int num : nums)
    {
        if (cnt1 == 0 && num != el2)
        {
            el1 = num;
            cnt1 = 1;
        }
        else if (cnt2 == 0 && num != el1)
        {
            el2 = num;
            cnt2 = 1;
        }
        else if (num == el1)
            cnt1++;
        else if (num == el2)
            cnt2++;
        else
        {
            cnt1--;
            cnt2--;
        }
    }

    // 2nd pass: Count actual frequency
    cnt1 = cnt2 = 0;
    for (int num : nums)
    {
        if (num == el1)
            cnt1++;
        else if (num == el2)
            cnt2++;
    }

    vector<int> res;
    int n = nums.size();
    if (cnt1 > n / 3)
        res.push_back(el1);
    if (cnt2 > n / 3)
        res.push_back(el2);

    return res;
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 2};
    vector<int> res1 = majorityElement(arr1);
    for (int x : res1)
        cout << x << " ";
    cout << endl;

    vector<int> arr2 = {11, 33, 33, 11, 33, 11};
    vector<int> res2 = majorityElement(arr2);
    for (int x : res2)
        cout << x << " ";
    cout << endl;

    return 0;
}
