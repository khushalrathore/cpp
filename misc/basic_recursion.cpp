#include <vector>
#include <map>
#include <iostream>

using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

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

void print_vec_using_recursion(vi &v, int i)
{
    if (i < 0)
    {
        cout << "\n";
        return;
    }
    print_vec_using_recursion(v, i - 1);
    cout << v[i] << " ";
}

void print_reverse_vec_recursion(vi &v, int i)
{
    if (i == 0)
    {
        cout << v[i] << "\n";
        return;
    }
    cout << v[i] << " ";
    print_reverse_vec_recursion(v, i - 1);
}

int sum(vi &v, int i)
{
    if (i < 0)
    {
        return 0;
    }
    return v[i] + sum(v, i - 1);
}

int max_vector(vi &v, int i)
{
    return 1;
}

void solve()
{
    // vi v = input_vector();
    // // print_vec_using_recursion(v, v.size() - 1);
    // // print_reverse_vec_recursion(v, v.size() - 1);
    // cout << sum(v, v.size() - 1) << "\n";
    cout << "Hey";
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