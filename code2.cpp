// create the pascal triangle

#include <iostream>
#include <vector>

using namespace std;
void create_pascal(vector<vector<int>> &tri, int r)
{
    for (int i = 0; i < r; i++)
    {
        vector<int> num;
        for (int j = 0; j <= i; j++)
        {
            if ((j == 0) || (j == i))
            {
                num.push_back(1);
            }
            else
            {
                num.push_back(tri[i - 1][j - 1] + tri[i - 1][j]);
            }
        }
        tri.push_back(num);
    }
}
void print_pascal(vector<vector<int>> &tri, int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int k = 1; k < r - i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << tri[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int r;
    vector<vector<int>> tri;
    cout << "Enter the row : ";
    cin >> r;
    create_pascal(tri, r);
    print_pascal(tri, r);
    return 0;
}