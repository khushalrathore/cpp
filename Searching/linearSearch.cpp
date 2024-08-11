#include <iostream>
using namespace std;

template <typename T>

void printThis(const T &container)
{
    for (typename T::const_iterator citr = container.begin(); citr != container.end(); ++citr)
    {
        cout << *citr << " ";
    }
}

int linearSearch(vector<int> &v, int key)
{
    bool found = false;
    int pos{};
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == key)
        {
            found = true;
            pos = i;
            break;
        }
    }
    pos = found ? pos : -1;
    return pos;
}

void solve()
{
    vector<int> v = {1, 12, 4, 14, 5, 16};
    int key = 14;
    printThis(v);
    cout << "\n";
    cout << key << " Found at index : " << linearSearch(v, key);
    cout << "\n";
}

int main()
{
    solve();
    return 0;
}