#include <iostream>
using namespace std;
using namespace chrono;

namespace info
{
    string myName = "Khushal";
}

#pragma region unnamed

void printName(int i, int n)
{

    if (i > n)
        return;
    cout << to_string(i) + " : " + info::myName + "\n";
    printName(i + 1, n);
}

void printItoN(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    printItoN(i + 1, n);
}

void printNtoI(int i, int n)
{
    if (n < i)
        return;
    cout << n << " ";
    printNtoI(i, n - 1);
}

void printItoN_backtracking(int i, int n)
{
    if (i <= 0)
    {
        return;
    }
    printItoN_backtracking(i - 1, n);
    cout << i << " ";
}

void printNtoI_backtracking(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printNtoI_backtracking(i + 1, n);
    cout << i << " ";
}

void nSum(int i, int result = 0)
{
    if (i < 0)
    {
        cout << result << " ";
        return;
    }
    nSum(i - 1, result + i);
}

int nSumReturns(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + nSumReturns(n - 1);
}

void nFact(int n, unsigned long long result = 1)
{
    if (n == 0)
    {
        cout << result << '\n';
        return;
    }
    nFact(n - 1, result * n);
}

int nFactReturns(int n, int result = 1)
{
    if (n == 0)
    {
        return result;
    }
    return nFactReturns(n - 1, result * n);
}

void inputArray(int arr[], int size, int i = 0)
{
    if (i >= size)
        return;
    cin >> arr[i];
    inputArray(arr, size, i + 1);
}

void printArray(int arr[], int size, int i = 0)
{
    if (i >= size)
    {
        cout << "\n";
        return;
    }
    cout << arr[i] << " ";
    printArray(arr, size, i + 1);
}

void arrayReverse(int arr[], int n, int i = 0)
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    arrayReverse(arr, n, i + 1);
}

bool isPalindrome(string s, int n, int i = 0)
{
    if (i > n / 2)
        return true;
    if (s[i] != s[n - i - 1])
    {
        return false;
    }
    return isPalindrome(s, n, i + 1);
}

int fib(int n)
{

    if (n <= 1)
        return n;
    int last = fib(n - 1);
    int slast = fib(n - 2);
    return last + slast;
}

#pragma endregion

void solve()
{
    // int i{};
    // int n{};
    // cout<<"Enter n : "
    // cin >> n;
    // int arr[n];
    // printName(i, n);
    // printItoN(i, n);
    // printItoN_backtracking(n, n);
    // printNtoI(i, n);
    // printNtoI_backtracking(i, n);
    // cout << nSumReturns(n) << "\n";
    // nSum(n);
    // cout << nFactReturns(n) << "\n";
    // nFact(n);
    // {
    //     inputArray(arr, n);
    //     cout << "Array----> ";
    //     printArray(arr, n);
    //     arrayReverse(arr, n);
    //     cout << "Reverse--> ";
    //     printArray(arr, n);
    // }
    // {
    //     string s1 = "racecar";
    //     int s1_size = s1.size();
    //     isPalindrome(s1, s1_size) ? cout << "\n`" + s1 + "` is a Palindrome\n" : cout << "\n`" + s1 + "` is not a Palindrome\n";

    //     string s2 = info::myName;
    //     int s2_size = s2.size();
    //     isPalindrome(s2, s2_size) ? cout << "\n`" + s2 + "` is a Palindrome\n" : cout << "\n`" + s2 + "` is not a Palindrome\n";
    // }
    // cout << fib(n);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    auto start = high_resolution_clock::now();
    solve();
    auto stop = high_resolution_clock::now();

    auto duration_ns = duration_cast<nanoseconds>(stop - start);
    auto duration_us = duration_cast<microseconds>(stop - start);
    auto duration_ms = duration_cast<milliseconds>(stop - start);
    auto duration_s = duration_cast<seconds>(stop - start);

    cout << "\n-----------------------------------------------------------\n"
         << "Time Taken:\t"
         << duration_s.count() << "s\t"
         << duration_ms.count() << "ms\t"
         << duration_us.count() << "us\t"
         << duration_ns.count() << "ns"
         << "\n-----------------------------------------------------------\n";

    return 0;
}