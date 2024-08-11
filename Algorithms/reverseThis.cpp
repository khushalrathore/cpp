#include <iostream>

using namespace std;

template <typename T>
void reverseThis(T &v, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    swap(v[start], v[end]);
    reverseThis(v, start + 1, end - 1);
}

template <typename T>
void printThis(const T &data_type)
{
    for (typename T::const_iterator citr = data_type.begin(); citr != data_type.end(); ++citr)
    {
        cout << *citr << " ";
    }
    cout << "\b\n";
}

void solve()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int start = 0;
    int endV = v.size() - 1;
    printThis(v);
    reverseThis(v, start, endV);
    printThis(v);

    cout << '\n';

    string s = "hello";
    int endS = s.size() - 1;
    printThis(s);
    reverseThis(s, start, endS);
    printThis(s);

    cout << '\n';

    array<int, 5> a = {65, 66, 67, 68, 69};
    int endA = a.size() - 1;
    printThis(a);
    reverseThis(a, start, endA);
    printThis(a);
}

int main()
{
    solve();
    return 0;
}