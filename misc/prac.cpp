#include "stdc++.h"

using namespace std;
using namespace chrono;

typedef vector<int> vi;
#define pb push_back
#define forn(i, n) for (int i = 0; i < n; i++)

void printVectorEnd(vi &v, int i)
{
  if (i < 0)
  {
    cout << "\n";
    return;
  }
  cout << v[i] << " ";
  printVectorEnd(v, i - 1);
}

void printVectorFront(vi &v, int i)
{
  if (i == v.size())
  {
    cout << "\n";
    return;
  }
  cout << v[i] << " ";
  printVectorFront(v, i + 1);
}

int fibonacci(int n)
{
  if (n < 2)
  {
    return n;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int fact(int num)
{
  if (num <= 1)
    return 1;
  return num * fact(num - 1);
}

long long nck(long long n, long long k)
{
  long long a = fact(n) / fact(k);
  long long denom = fact(n - k);
  return a / denom;
}

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

bool isPalindromeVector(vi v, int i, int j)
{
  if (i >= j)
  {
    return true;
  }
  return (v[i] == v[j]) && isPalindromeVector(v, i + 1, j - 1);
}

bool isPS(string s)
{
  int n = s.length();
  if (n < 2)
    return true;
  return (s[0] != s[n - 1]) ? false : isPS(s.substr());
}

int ToH(int n) { return (n <= 1) ? 1 : (2 * ToH(n - 1) + 1); } // use return (pow(2,n)-1)

int nCk(int n, int k)
{
  k = max(k, n - k);
  if (n == k)
    return 1;
  return (n > k) ? nCk(n - 1, k - 1) + nCk(n - 1, k) : -1;
}

void merge_sort(vi &a, vi &b)
{
  vi c;
  int i = 0, j = 0;
  while (i < a.size() && j < b.size())
  {
    if (a[i] < b[j])
    {
      c.push_back(a[i]);
      i++;
    }
    else
    {
      c.push_back(b[j]);
      j++;
    }
  }

  while (i < a.size())
  {
    c.push_back(a[i]);
    i++;
  }
  while (j < b.size())
  {
    c.push_back(b[j]);
    j++;
  }
  sort(c.begin(), c.end());

  for (int elem : c)
  {
    cout << elem << " ";
  }
  cout << endl;
}

int tribonacci(int n)
{
  if (n == 0)
    return 0;
  if (n <= 2)
    return 1;
  return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

void solve()
{
  cout << "11111111";
}
int main()
{

  // ios_base::sync_with_stdio(0);
  // cin.tie(0);
  // cout.tie(0);
  // int frequency = 1;
  // auto start = high_resolution_clock::now();
  int frequency = 1;
  forn(i, frequency)
  {
    solve();
  }
  // auto stop = high_resolution_clock::now();
  // auto duration4 = duration_cast<nanoseconds>(stop - start);
  // auto duration3 = duration_cast<milliseconds>(stop - start);
  // auto duration2 = duration_cast<microseconds>(stop - start);
  // auto duration = duration_cast<seconds>(stop - start);
  // cout << "\n\n[" << duration4.count() * 0.000000001 << " seconds, " << duration4.count() << "ns ]\n";
}
