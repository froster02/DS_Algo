#include <iostream>
#include <set>
using namespace std;

int main(){

    set<pair<int, int> > s;
    s.insert(make_pair(10,1));    
    s.insert(make_pair(20,1));    
    s.insert(make_pair(20,100));    
    s.insert(make_pair(5,1));    
    s.insert(make_pair(5,3));    
    s.insert(make_pair(5,2));    

    //output will be sorted pairs
    for(auto p : s)
        cout << p.first << " , " << p.second << endl;
    
    cout << endl;

    s.erase(make_pair(5,3));
    s.insert(make_pair(5,4));

    s.erase(s.find(make_pair(20, 100)));
    s.insert(make_pair(5,4));

    for(auto p : s)
        cout << p.first << " & " << p.second << endl; 

    return 0;
}