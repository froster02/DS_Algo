#include <iostream>
#include <cstdio>
#include <vector>
#include <iterator>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main(){
    IO;

    vector<int> v(v.begin(), v.end());
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int no;
        cin >> no;
        v.push_back(no);
    }

    cout << "size : " << v.size() << endl;
    cout << "capacity : " << v.capacity() << endl;
    cout << "max_size : " << v.max_size() << endl;
    cout << endl;

    //to insert some elements at a place in vector
    v.insert(v.begin() + 3, 50);
    cout << "insert at position : ";
    for(int x : v)
        cout << x << "|";
    cout << endl << endl; 

    //to insert some elements at a place in vector in range
    v.insert(v.begin() + 4, 2, 55);
    cout << "insert in range : ";
    for(int x : v)
        cout << x << "|";
    cout << endl << endl;

    //erase elements from vector at a position
    v.erase(v.begin() + 3);
    cout << "erasing from position : ";
    for(auto it = v.begin(); it != v.end(); it++)
        cout << *it << "|";
    cout << endl << endl;

    //erase elements from vector in a range
    v.erase(v.begin() + 2, v.begin() + 5);
    cout << "erasing in range : ";
    for(int x : v)
        cout << x << "|";
    cout << endl;

    //erase all the elements of vector but it doesnot delete the memory occupied by the array
    v.clear();

    for(int x : v)
        cout << x << "|";
    cout << endl;

    //empty is a checker, it checks whether the vector is empty or not
    if(v.empty())
        cout << "this is an empty vector" << endl;
    cout << endl;

    cout << v.front() << endl;
    cout << v.back() << endl;

    return 0;
} 