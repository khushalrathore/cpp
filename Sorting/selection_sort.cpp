#include <iostream>
#include <vector>
using namespace std;
template <typename T>

void printThis(const T &data_type)
{
    for (typename T::const_iterator citr = data_type.begin(); citr != data_type.end(); ++citr)
    {
        cout << *citr << " ";
    }
    cout << "\n";
}

void selectionSort(vector<int> &v, int n, int choice = 0)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (choice == 0)
            {
                if (v[minIndex] > v[j])
                    minIndex = j;
            }
            else
            {
                if (v[minIndex] < v[j])
                    minIndex = j;
            }
        }
        swap(v[minIndex], v[i]);
    }
    printThis(v);
}

void solve()
{
    vector<int> v = {1, 30, 20, -90, -5, -1, 50, 50};
    int n = v.size();
    printThis(v);
    selectionSort(v, n);    // no argument (default : 0) for default or Increasing
    selectionSort(v, n, 1); // any argument#number other than 0 for Decreasing
}

int main()
{
    solve();
    return 0;
}