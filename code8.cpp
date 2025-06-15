// Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int num = b;
    b = a;
    a = num;
}

int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);)
    {
        if (arr[i] > arr[n])
        {
            swap(arr[i], arr[n]);
            i++;
            n--;
        }
        if (arr[i] == 0)
        {
            i++;
        }
        if (arr[n] == 2)
        {
            n--;
        }
        if (i >= n)
        {
            break;
        }
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}