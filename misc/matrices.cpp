#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<vi> vvi;
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

void populate_matrix(vvi &v)
{
    forn(i, v.size())
    {
        forn(j, v[0].size())
        {
            v[i][j] = i * v[0].size() + j + 1;
        }
    }
}

void print_matrix(vvi &v)
{
    for (vi v1 : v)
    {
        print_vec(v1);
    }
}

bool searchInMatrix(vvi &matrix, int target)
{
    forn(i, matrix.size())
    {
        forn(j, matrix[0].size())
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vvi matrix(m, vi(n, 0)); // int matrix[m][n];
    populate_matrix(matrix);
    cout << searchInMatrix(matrix, 5) << "\n";
    // print_matrix(matrix);
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