// Merge two Sorted Arrays Without Extra Space

#include <iostream>
#include <vector>

void swap(int &a, int &b)
{
    int num = b;
    b = a;
    a = num;
}

using namespace std;

int main()
{
    vector<int> arr1 = {1, 4, 8, 10};
    vector<int> arr2 = {2, 3, 9};
    int min = arr2[0];
    int num = max(arr1.size(), arr2.size());
    for (int i = 0; i < arr1.size(); i++)
    {
        if (arr1[i] > min)
        {
            swap(arr1[i], arr2[0]);
            int j = 0;
            while ((arr2[j] > arr2[j + 1]) && (j < arr2.size() - 1))
            {
                swap(arr2[j], arr2[j + 1]);
                j++;
            }
            min = arr2[0];
        }
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}