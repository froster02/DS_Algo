#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){

    map<string, int> m;
    
    //* ways to insert in map
    //1.
    m.insert(make_pair("mango", 100));

    //2.
    pair<string, int> p;
    p.first = "apple";
    p.second = 120;
    m.insert(p);

    //3.
    m["banana"] = 20;

    //* Search/find
    //1. find fun returns (iterator)
    string fruit;
    cin >> fruit;

    m[fruit] += 20;

    auto it = m.find(fruit);
    if(it != m.end())
        cout << "Price of " << fruit << " is " << m[fruit] << endl;
    else 
        cout << "fruit is not present" << endl;

    //2. count fun returns (interger)
    if(m.count(fruit))
        cout << "Price is " << m[fruit] << endl;
     else 
        cout << "Not found";

    //* Erase
    m.erase(fruit);

    m["litchi"] = 60;
    m["apple"] = 80;
    //iterate over all the key values pairs
    for(auto it = m.begin(); it != m.end(); it++)
        cout << it->first << " and " << it->second << endl;

    return 0;

}