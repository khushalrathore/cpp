#include <iostream>
#include <map>
using namespace std;

pair<int, char> getMaxOccurringChar(string &s)
{
    map<char, int> freqMap;
    for (char c : s)
    {
        freqMap[c]++;
    }
    char maxChar = s[0];
    int maxCount = freqMap[maxChar];

    for (const auto &pair : freqMap)
    {
        if (pair.second > maxCount)
        {
            maxChar = pair.first;
            maxCount = pair.second;
        }
    }
    return {maxCount, maxChar};
}

void solve()
{
    string str = "geeks for geeks";
    auto result = getMaxOccurringChar(str);
    cout << "max occurring `" << result.second << "` occurred " << result.first << " times\n";
}
int main()
{
    solve();
    return 0;
}
