#include <iostream>

using namespace std;

int main(void)
{
    int n, m;
    cout << "Enter values of n & m: ";
    cin >> n >> m;
    int arr[n][m];
    int ans[m][n];
    cout << endl;
    cout << "Enter values of matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[j][i] = arr[i][j];
        }
    }
    cout << endl;
    cout << "The transpose of the matrix is:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}