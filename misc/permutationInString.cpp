#include <iostream>
using namespace std;
bool checkInclusion(string s1, string s2)
{
    int count[26] = {0};
    for (int i = 0; i < s1.length(); ++i)
    {
        int index = s1[i] - 'a';
        count[index]++;
    }
}
void solve()
{
    string s1 = "ab";
    string s2 = "ediabooo";
    cout << checkInclusion(s1, s2);
}
int main()
{
    // solve();
    int count[26] = {0};
    for (int i = 0; i < 26; ++i)
    {
        cout << count[i];
    }
    return 0;
}