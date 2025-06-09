// Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

#include <iostream>
#include <vector>

using namespace std;
void check(vector<vector<int>> &mac, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mac[i][j] == 0)
            {
                for (int k = 0; k < max(m, n); k++)
                {
                    if (k < m)
                    {
                        mac[k][j] = -1;
                    }
                    if (k < n)
                    {
                        if (mac[i][k] != 0)
                        {
                            mac[i][k] = -1;
                        }
                    }
                }
            }
        }
    }
}

void printout(vector<vector<int>> &matrix, int m, int n)
{
    cout << "The output matrix : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    cout << "Enter the rows and columns : ";
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter the elements of the matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    check(matrix, m, n);
    printout(matrix, m, n);
    return 0;
}
