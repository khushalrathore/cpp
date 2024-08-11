#include <stack>
#include <iostream>

using namespace std;

int main(){
    stack<string> s;

    s.push("Hello");
    s.push(", I");
    s.push("am");
    s.push("Khushal");
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\nSize : "<<s.size()<<"\n";
}