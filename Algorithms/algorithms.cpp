#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void vectorPopulator(vector<int> &v, int LIMIT)
{
    for (int i = 1; i <= LIMIT; ++i)
    {
        v.push_back((i * i));
    }
}

void vectorPrint(vector<int> &v)
{
    for (vector<int>::iterator itr = v.begin(); itr != v.end(); ++itr)
    {
        cout << *itr << " ";
    }
}

void binarySearch(vector<int> &v, int key)
{
  bool isFound = binary_search(v.begin(), v.end(), key);
    vector<int>::iterator foundElement = find(v.begin(), v.end(), key);
    string opti = isFound ? " is present at : " : " is NOT present ";
    string foundAt = isFound ? to_string(distance(v.begin(), foundElement)) : " ";

    cout << "\n"
         << "KEY = "
         << key
         << opti
         << foundAt
         << "\n"
         << "v.size() : " << v.size() << "\nv.capacity() : " << v.capacity()
         << "\n";
}

void lowerBound(vector<int> &v, int key)
{
    vector<int>::iterator lb = lower_bound(v.begin(), v.end(), key);
    int idx = distance(v.begin(), lb);
    cout << "\n";
    cout << "Lower Bound for value = " << key << " is found at " << idx;
}

void upperrBound(vector<int> &v, int key)
{
    vector<int>::iterator lb = upper_bound(v.begin(), v.end(), key);
    int idx = distance(v.begin(), lb);
    cout << "\n";
    cout << "Upper Bound for value = " << key << " is found at " << idx;
}

void minMax(vector<int> v)
{
    cout << "\n";
    cout << "Min Element of this range is : " << *min_element(v.begin(), v.end());
    cout << "\n";
    cout << "Max Element of this range is : " << *max_element(v.begin(), v.end());
    cout << "\n";
}

void reverseThis(vector<int> &v)
{
    // int n = v.size();
    // for (int i = 0; i < n / 2; ++i)
    // {
    //     swap(v[i], v[n - i - 1]);
    // }
    reverse(v.begin(), v.end());
    vectorPrint(v);
}

void rotateThis(vector<int> &v, int times)
{
    rotate(v.begin(), v.begin() + 3, v.end());
    vectorPrint(v);
}

void solve()
{
    int i = 5;
    vector<int> v;
    vectorPopulator(v, i);

    cout << "\nInitial Vector : ";
    vectorPrint(v);

    cout << "\nRotate By 3 : ";
    rotateThis(v, 3);

    cout << "\nReversed Vector : ";
    reverseThis(v);
    cout << "\n";

    binarySearch(v, 100);
    lowerBound(v, 64);
    upperrBound(v, 81);
    minMax(v);
    cout << "\n";
}

int main()
{
    solve();
    return 0;
}