#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef pair<int, int> pii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

vi input_vector()
{
    int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    return v;
}

void print_vec(vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int find_majority_element(vi &v)
{
    umii counts;
    for (int x : v) // O(n)
    {
        counts[x]++;
        if (counts[x] > v.size() / 2)
        {
            return x;
        }
    }
    // for (auto [key, value] : counts) //O(n*1) = O(n)
    // {
    //     if (value > v.size() / 2)
    //     {
    //         return key;
    //     }
    // }
    return -1;
}

int find_imposter_element(vi &v)
{
    umii counts;
    for (int x : v) // O(n)
    {
        counts[x]++;
        if (counts[x] > v.size() / 2)
        {
            return x;
        }
    }
    // for (auto [key, value] : counts) //O(n*1) = O(n)
    // {
    //     if (value > v.size() / 2)
    //     {
    //         return key;
    //     }
    // }
    return -1;
}

void solve()
{
    vi v = input_vector();
    cout << find_majority_element(v) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    // auto start = high_resolution_clock::now();
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<nanoseconds>(stop - start);
    // cout << duration.count() << "\n";
}