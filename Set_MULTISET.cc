#include <iostream>
#include <set>
using namespace std;

typedef multiset<int> :: iterator It;

int main(){

    cout << endl;

    //Multiset - that can store multiple elements that have same elements
    //stored in a specific -> sorted according to internal comparison object
    // values once inserted cannot be modified
    // associative container - key (value)
    // elements ar refered by the value not by the index
    // underliying inplementation is a BST

    int a[] = {10,20,30,20,30,30,10,10,30,30};
    int n = sizeof(a)/sizeof(int);
    multiset<int> m(a, a+n);

    //erase - 20
    m.erase(10);

    //insert
    m.insert(80);

    //count
    m.count(10);

    //iterate
    for(int x : m)
        cout << x << ", ";
    cout << endl;
    cout << "count of 80 = " << m.count(80);
    cout << endl;

    //find
    auto it = m.find(30);
    cout << *it << endl;

    //get all elements which are equal to 30
    pair<It, It> range = m.equal_range(30);

    for(auto it = range.first; it != range.second; it++)
        cout << *it << " - ";

    cout << endl;

    cout << endl;
    cout << endl;
    return 0;
}