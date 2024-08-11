#include <chrono>
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef unordered_map<int, int> umii;

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

void print_umii(umii &m)
{
    for (pii pkv : m)
    {
        cout << pkv.first << ": " << pkv.second << "\n";
    }
}

int find_mode(vi &v) // O(n)
{
    umii counts;
    int max_freq = 0, mode; // O(1)

    for (int x : v) // O(n*1) = O(n)
    {
        counts[x]++;
        if (counts[x] > max_freq)
        {
            max_freq = counts[x];
            mode = x;
        }
    }

    // for (pii pkv : counts) // O(n*1) = O(n)
    // {
    //     if (pkv.second > max_freq)
    //     {
    //         max_freq = pkv.second;
    //         mode = pkv.first;
    //     }
    // }
    // print_umii(counts);
    return mode;
}

void solve()
{
    vi v = input_vector();
    cout << find_mode(v) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    auto start = high_resolution_clock::now();
    solve();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << duration.count() << "\n";
}