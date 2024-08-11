#include <list>
#include <iostream>

using namespace std;

int main(){

    list<int> n(5,10);
    list<int> l(n); //list copied into n
    // l.push_back(1);
    // l.push_front(2);

    list<int>::iterator Itr;
    list<int>::reverse_iterator rItr;
    list<int>::const_iterator cItr;
    list<int>::const_reverse_iterator crItr;

    cout<<"\nSize of List : "<<l.size()<<"\n";
    cout<<"l[i] : ";
    for(Itr = l.begin(); Itr != l.end();++Itr){
       cout << *Itr<< " " ;
    }
    cout<<"\n";

    l.erase(--l.end());
        cout<<"\nSize of List after .erase(--.end): "<<l.size()<<"\n";
    cout<<"l[i] : ";

    for(Itr = l.begin(); Itr != l.end();++Itr){
       cout << *Itr<< " " ;
    }
        cout<<"\n";

}