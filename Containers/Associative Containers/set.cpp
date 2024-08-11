#include <set>
#include <iostream>

using namespace std;

int main(){
    set<int,greater<int>> s;
    s.emplace(55);
    s.emplace(1);
    s.emplace(55);
    s.emplace(55);
    s.emplace(3);
    for(auto Itr= s.begin(); Itr!=s.end();++Itr){
        cout<<*Itr<<" ";
    }
    set<int>::iterator it3 = s.find(3);
    cout<<"\n";
    cout<<"\n(s.count(55) || s.count(3)) : "<<(s.count(55) || s.count(3))<<"\n";
    cout<<"\ns.find(3) returns iterator : "<<*it3<<"\n";
    s.erase(s.begin());
    cout<<"\nAfter s.erase(s.begin() || 5) : ";
    for(auto Itr= s.begin(); Itr!=s.end();++Itr){
    cout<<*Itr<<" ";
    }
    cout<<"\n(s.count(55) || s.count(3)) : "<<(s.count(55) || s.count(3))<<"\n";

    s.erase(--s.end());
    cout<<"\nAfter s.erase(--s.end() || 1) : ";
    for(auto Itr= s.begin(); Itr!=s.end();++Itr){
    cout<<*Itr<<" ";
    }
    cout<<"\n\n";

}