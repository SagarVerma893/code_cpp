// Count Reverse Pairs

#include <iostream>
#include <vector>

using namespace std;

int mergeAndCount(vector<int> &arr, int left, int mid, int right)
{
    int count = 0;
    int j = mid + 1;

    // Count reverse pairs
    for (int i = left; i <= mid; i++)
    {
        while (j <= right && arr[i] > 2LL * arr[j])
        {
            j++;
        }
        count += (j - (mid + 1));
    }

    // Now do the actual merge sort
    vector<int> temp;
    int i = left;
    j = mid + 1;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
        temp.push_back(arr[i++]);
    while (j <= right)
        temp.push_back(arr[j++]);

    for (int i = left; i <= right; i++)
    {
        arr[i] = temp[i - left];
    }

    return count;
}

int mergeSort(vector<int> &arr, int left, int right)
{
    if (left >= right)
        return 0;

    int mid = (left + right) / 2;
    int count = mergeSort(arr, left, mid);
    count += mergeSort(arr, mid + 1, right);
    count += mergeAndCount(arr, left, mid, right);

    return count;
}

int countReversePairs(vector<int> &arr)
{
    return mergeSort(arr, 0, arr.size() - 1);
}

int main()
{
    vector<int> arr = {1, 3, 2, 3, 1};
    int result = countReversePairs(arr);
    cout << "Count Reverse Pairs: " << result << endl;
    return 0;
}
