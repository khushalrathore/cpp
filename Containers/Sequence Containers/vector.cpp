#include <vector>
#include <iostream>

using namespace std;

void s()
{
    // vector<int> v(5, 1);
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    v.push_back(99);

    int sizeStl = v.size();
    int capacityStl = v.capacity();
    cout << "v.size() : " << sizeStl << "\n";
    cout << "v.capacity() : " << capacityStl << "\ns[i] : ";
    for (int i = 0; i < sizeStl; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    cout << "v.at(3) : " << v.at(3) << "\n";
    cout << "v.empty() #bool: " << v.empty() << "\n";
    cout << "v.front() : " << v.front() << "\n";
    cout << "v.back() : " << v.back();

    v.pop_back();
    sizeStl = v.size();
    cout << "\n\npopped elem 99 using v.pop_back()\n";
    for (int i = 0; i < sizeStl; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    cout << "new v.size() : " << sizeStl << "\n";
    cout << "new v.capacity() : " << capacityStl << "\n";
}

void formatter()
{
    cout << "\nSTL VECTOR--------------------------------\n\n";
    s();
    cout << "\n------------------------------------------\n";
}
int main()
{
    formatter();
    // vector<int> a = {1,2,3,4,5};
    // vector<int>::reverse_iterator itr;
    // for(itr = a.rbegin(); itr!=a.rend();++itr){
    //     cout<<*itr<<" ";
    // }
    return 0;
}