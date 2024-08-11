#include <vector>
#include <map>
#include <iostream>
using namespace std;

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

void solve()
{
  vector<int> arr = input_vector();
  map<int, int> freq;
  for (int num : arr)
    freq[num]++;
  int mode = -1;
  int maxFreq = 0;
  for (auto [key, value] : freq)
  {
    if (value % 2 != 0)
      cout << key;
  }
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