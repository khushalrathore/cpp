#include <queue>
#include <iostream>

using namespace std;

int main(){
    priority_queue<int, vector<int>, less<int>> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(13);
    maxi.push(7);
    maxi.push(-1);
    maxi.push(100);
    maxi.push(-21);

    mini.push(1);
    mini.push(13);
    mini.push(7);
    mini.push(-1);
    mini.push(100);
    mini.push(-21);

    while(!maxi.empty()){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<"\n";

    while(!mini.empty()){
        cout<<mini.top()<<" ";
        mini.pop();
    }

}