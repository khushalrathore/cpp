#include <iostream>
using namespace std;

template <typename T>

void printThis(T &container)
{
    for (typename T::iterator itr = container.begin(); itr != container.end(); ++itr)
    {
        cout << *itr << " ";
    }
}

int binarySearch(vector<int> &v, int key)
{
    bool found = false;
    int start{};
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (key == v[mid])
        {
            found = true;
            return mid;
        }
        else if (key > v[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

void solve()
{
    vector<int> v = {1, 12, 4, 14, 5, 16};
    int key = 14;
    sort(v.begin(), v.end());
    printThis(v);
    cout << "\n";
    cout << key << " Found at index : " << binarySearch(v, key);
    cout << "\n";
}

int main()
{
    solve();
    return 0;
}