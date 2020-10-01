/* VECTOR, take input form user */
#include <iostream>
#include <cstdio>
#include <vector>
#include <iterator>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main(){
    IO;

    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int no;
        cin >> no;
        //push back at the end of vector
        v.push_back(no);
    }

    cout << endl;
    
    for(int x : v)
        cout << x << ", ";
    cout << endl;

    cout << endl;

    //pop back from the end of vector
    v.pop_back();

    for(auto it = v.begin(); it != v.end(); it++)
        cout << *it << ", ";
    cout << endl;

    return 0;
}
