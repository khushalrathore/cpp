#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef mii::iterator miitr;
typedef map<string, vs> msvs;
typedef msvs::iterator msvsitr;

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

void print_mii(mii &m)
{
    // for (miitr itr = m.begin(); itr != m.end(); itr++)
    // {
    //     cout << itr->first << ": " << itr->second << "\n";
    //     // auto pair_key_value = (*itr);
    //     // int key = itr->first; // (*itr).first
    //     // int value = itr->second;
    // }
    for (auto [key, value] : m) // pkv = [key, value]
    {
        // cout << pkv.first << ": " << pkv.second << "\n";
        cout << key << ": " << value << "\n";
    }
}

void print_vec(vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void populate_crush_map(msvs &m)
{
    m["Nipun"] = {"Vani", "Radha"};
}

void print_msvs(msvs &m)
{
    for (auto [student, crush_list] : m)
    {
        cout << student << ": ";
        for (string crush_name : crush_list)
        {
            cout << crush_name << ", ";
        }
        cout << "\n";
    }
}

void playing_with_maps()
{
    msvs crush_map;
    populate_crush_map(crush_map);
    print_msvs(crush_map);

    // map<int, int> m;
    // m.insert({1, 2});
    // m[2] = 3;
    // print_mii(m);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    playing_with_maps();
    // auto start = high_resolution_clock::now();
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<nanoseconds>(stop - start);
    // cout << duration.count() << "\n";
}