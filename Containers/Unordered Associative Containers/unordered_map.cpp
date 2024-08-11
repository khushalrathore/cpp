#include <map>
#include <iostream>

using namespace std;

int main(){
    map<int, string> m;
    for(int i=0;i<10;++i){
        m.insert({i,to_string(i)});
    }
    // for( auto &pair:m){
    //     cout<<pair.first<<" : "<<pair.second<<"\n";
    // }
    m.erase(7);
        
    // auto it = m.find(5);
    for( auto i = m.begin() ; i != m.end() ; ++i){
        cout<<(*i).first<<" : "<<(*i).second<<"\n";
    }
}