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
  vi v = input_vector();
  mii freq;

  for (int num : v)
  {
    freq[num]++;
  }

  int mode = -1;
  int maxFreq = 0;

  for (auto it = freq.begin(); it != freq.end(); ++it)
  {
    if (it->second > maxFreq)
    {
      maxFreq = it->second;
      mode = it->first;
    }
    cout << "Num : " << it->first << " --- Freq : " << it->second << "\n";
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