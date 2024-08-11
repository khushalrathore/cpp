#include <queue>
#include <iostream>

using namespace std;

int main(){
    queue<string> q;
    q.push("Hello");
    q.push(", I");
    q.push("am");
    q.push("Khushal");
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}