#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i + 1; j < matrix[0].size(); j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        int low = 0, high = matrix.size() - 1;
        while (low < high)
        {
            swap(matrix[i][low], matrix[i][high]);
            low++;
            high--;
        }
    }
}
int main()
{
    int m, n;
    // Rows    Columns
    cin >> m >> n;
    // Creating 2D  vector
    vector<vector<int>> matrix(m, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
