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

void bubbleSort(vector<int> &v, int n, int choice = 0)
{
    while (n--)
    {
        for (int i = 0; i < n; ++i)
        {
            if (choice == 0)
            {
                if (v[i] > v[i + 1])
                    swap(v[i], v[i + 1]);
            }
            else
            {
                if (v[i] < v[i + 1])
                    swap(v[i], v[i + 1]);
            }
        }
    }
    printThis(v);
}

void solve()
{
    vector<int> v = {1, 30, 20, -90, -5, -1, 50, 50};
    int n = v.size();
    printThis(v);
    bubbleSort(v, n);    // no argument (default : 0) for default or Increasing
    bubbleSort(v, n, 1); // any argument#number other than 0 for Decreasing
}

int main()
{
    solve();
    return 0;
}