#include <iostream>

using namespace std;
void inputMatrix(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
        }
    }
}

void printMatrix(int arr[][100], int m, int n)
{
    cout << "Matrix entered:\n";
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}

void solve()
{
    cout << "For an m*n matrix; Enter : \n\n-->number of rows(m) : ";
    int m{};
    cin >> m;

    cout << "-->number of columns(n) : ";
    int n{};
    cin >> n;

    int arr[100][100];

    int size = m * n;
    size > 0 && cout << "-->number of elements : " << size << "\nEnter Elements (space separated) : ";

    inputMatrix(arr, m, n);
    printMatrix(arr, m, n);
}

int main()
{
    solve();
    return 0;
}
