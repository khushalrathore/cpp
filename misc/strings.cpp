#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

void solve()
{
    string s = "My name is Khan.";
    string s3 = "Aditya";

    // using substrings
    // cout << s.substr(3, 4) << "\n";

    // changing the value of name in s
    s = s.substr(0, 11) + s3 + ".";
    cout << s << "\n";

    // cout << s.replace(11, 15, "Arsh") << "\n";

    s = "Hello World";
    s.resize(5);

    // converting string to int and vice versa
    string s5 = to_string(3);
    int three = stoi("3");

    // using stoi to increase an int value stored in string var by 1
    string s1 = "1", s2 = "2";

    int resultant_num = stoi(s2) + 1;
    string final_string = to_string(resultant_num);
    final_string += s3;

    // finding the return type of a built in method in cpp
    cout << typeid(to_string(stoi(s1) + stoi(s2))).name() << "\n";

    // finding a substring in a string
    if (s.find("Manan") == string::npos)
    {
        cout << s.find("Manan") << "\n";
        cout << "Case Caught\n";
    }

    // Sorting a string
    s = "bdca";
    sort(s.begin(), s.end());

    // Reversing a string
    s = "abcd";
    reverse(s.begin(), s.end());

    // cout << s << "\n";
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