#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef map<int, string> mis;
typedef map<string, int> msi;
typedef map<string, string> mss;
#define forn(i, n) for (int i = 0; i < n; i++)

int findClosestNumber(vector<int> &nums)
{
    for (int n : nums)
    {
        cout << abs(0 - n);
    }
}
int main()
{

    vi nums{-4, -2, 1, 4, 8};
    findClosestNumber(nums);
    return 0;
}