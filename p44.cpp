/*  concepts of Vectors  */
#include <iostream>
#include <cstdio>
#include <vector>
#include <iterator>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main(){
    IO;

    //Vector is a Class and int is an Object
    vector<int> a;
    
    //create 5 integers and set there value to 10
    vector<int> b(5,10);

    //begin() -> starting point of vector, end() -> end point of vector
    vector<int> c(b.begin(), b.end());

    //initalize vector with some values
    vector<int> d{1, 2, 3, 10, 14};

    //iterate over the vector
    for(int i=0; i<b.size(); i++)
        cout << b[i] << ", ";
    cout << endl;

    //using iterator the subfunction of vector iterate over the array c
    for(auto it = c.begin(); it != c.end(); it++)
        cout << *it << ", ";
    cout << endl;

    //using for each loop iterate over the vector d
    for(int x : d)
        cout << x << ", ";
    cout << endl;

    return 0;
}