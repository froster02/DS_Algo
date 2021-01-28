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
    cout << endl;
    
    auto it1 = s.lower_bound(make_pair(20,1));
    cout << it1->first << ", " << it1->second << endl;

    auto it2 = s.upper_bound(make_pair(20,50));
    cout << it2->first << ", " << it2->second << endl;


    return 0;
}