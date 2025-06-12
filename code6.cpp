// Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &x)
{
    int n = x.size();
    int i = n - 2;

    while (i >= 0 && x[i] >= x[i + 1])
    {
        i--;
    }

    if (i >= 0)
    {
        int j = n - 1;
        while (x[j] <= x[i])
        {
            j--;
        }
        swap(x[i], x[j]);
    }

    reverse(x.begin() + i + 1, x.end());
}

int main()
{
    vector<int> x;
    int num;
    cout << "Enter the Numbers (-1 to stop): " << endl;

    while (true)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        x.push_back(num);
    }

    nextPermutation(x);

    cout << "Next Permutation: ";
    for (int i : x)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
