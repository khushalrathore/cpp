#include <iostream>
#include <vector>
#include <map>
using namespace std;
// 0.4 0.055 0.076 0.03 0.2 0.043 0.015 0.045
void printV(vector<double> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        i == v.size() - 1 ? cout << v[i] << "\n" : cout << v[i] << ", ";
    }
}

double mean(vector<double> &v)
{
    double result = 0;
    for (auto x : v)
    {
        result += x;
    }
    result /= v.size();
    return result;
}

void mode(std::vector<double> &v)
{
    if (v.empty())
    {
        std::cout << "The vector is empty." << std::endl;
        return;
    }

    std::unordered_map<double, int> frequency_map;

    for (double num : v)
    {
        frequency_map[num]++;
    }

    int max_count = 0;
    for (const auto &pair : frequency_map)
    {
        if (pair.second > max_count)
        {
            max_count = pair.second;
        }
    }

    std::vector<double> modes;
    for (const auto &pair : frequency_map)
    {
        if (pair.second == max_count)
        {
            modes.push_back(pair.first);
        }
    }

    std::cout << "Mode(s): ";
    for (double m : modes)
    {
        std::cout << m << " ";
    }
    std::cout << "Frequency: " << max_count << std::endl;
}

double median(vector<double> &v)
{
    int end = v.size() - 1;
    return end % 2 == 0 ? (v[end / 2])
                        : ((v[end / 2]) + (v[end / 2 + 1])) / 2;
}

int main()
{
    cout << "Enter Size\t:\t";
    int n;
    cin >> n;
    vector<double> v;
    v.resize(n);
    cout << "Enter Elements\t:\t";
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    cout << "Sorted List\t:\t";
    sort(v.begin(), v.end());
    printV(v);
    cout << "\nMin\t\t:\t" << *min_element(v.begin(), v.end());
    cout << "\nMax\t\t:\t" << *max_element(v.begin(), v.end());
    cout << "\nRange\t\t:\t" << *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
    cout << "\nMean\t\t:\t" << mean(v);
    cout << "\nMode\t\t:\t";
    mode(v);
    cout << "\nMedian\t\t:\t" << median(v);

    cout << "\n\n";
    return 0;
}