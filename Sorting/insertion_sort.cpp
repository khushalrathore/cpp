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

void insertionSort(vector<int> &v, int n, int choice = 0)
{
    int i = 1;
    while (i < n)
    {
        int j = i - 1;
        int temp = v[i];
        while (j >= 0)
        {
            if (v[j] > temp)
            {
                v[j + 1] = v[j];
            }
            else
            {
                break;
            }
            j--;
        }
        i++;
        v[j + 1] = temp;
    }
    printThis(v);
}

void solve()
{
    vector<int> v = {1, 30, 20, -90, -5, -1, 50, 50};
    int n = v.size();
    printThis(v);
    insertionSort(v, n);    // no argument (default : 0) for default or Increasing
    insertionSort(v, n, 1); // any argument#number other than 0 for Decreasing
}

int main()
{
    solve();
    return 0;
}