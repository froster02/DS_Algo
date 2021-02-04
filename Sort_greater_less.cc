#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main(){

    vector<int> v(0);
    int n;

    cin >> n;
    for(int i = 0; i < n; i ++){
        int e;
        cin >> e;
        v.push_back(e);
    }

    // ! less function (below 2 funcitons works same by sorting the elemets increasing order)
    sort(v.begin(), v.begin() + v.size(), less<int> ());
    sort(v.begin(), v.begin() + v.size());

    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++)
        cout << (*it) << ", ";

    cout << "\n";

    //greater function
    sort(v.begin(), v.begin() + v.size(), greater<int> ());

    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++)
        cout << (*it) << ", ";

    return 0;
}