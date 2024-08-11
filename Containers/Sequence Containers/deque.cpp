#include <deque>
#include <iostream>

using namespace std;

void s()
{
    deque<string> dq;
    dq.push_back("`PushedFromBack`");
    dq.push_front("`PushedFromFront`,");

    for (string s : dq)
    {
        cout << s << " ";
    }
        cout<<"\nPrint First Index Element : "<<dq.at(1)<<"\n";
        cout<<"Print Zero Index Element : "<<dq.at(0)<<"\n";

    dq.pop_back();
    cout << "\n\nAfter pop_back\n";
    for (string s : dq)
    {
        cout << s << " ";
    }
    dq.pop_front();
    cout << "\n\nAfter pop_front\n";
    for (string s : dq)
    {
        cout << s << " ";
    }
}


void formatter()
{
    cout << "\n\nSTL DEQUE--------------------------------\n\n";
    s();
    cout << "\n------------------------------------------\n\n";
}
int main()
{
    // formatter();
    deque<int> a = {1,2,3,4,5};
    deque<int>::iterator itr;
    for(itr = a.begin(); itr != a.end(); ++itr){
        cout<< *itr<<" ";
    }
    return 0;
}