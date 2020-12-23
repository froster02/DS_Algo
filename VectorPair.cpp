/*  let suppose a user want to book an OLA cab and he looks for the cabs nearby him on app, this program tells which can is
nearest to him assuming the user be at (0,0) cordinate  */
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iterator>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

bool compare(pair<int, int>p1, pair<int, int>p2){
    // d1 = root(x1^2, y1^2)
    int d1 = (p1.first * p1.first) + (p1.second * p1.second);
    // d2 = root(x2^2, y2^2)
    int d2 = (p2.first * p2.first) + (p2.second * p2.second);

    //if 2 cars at same distance then short according to x-coordinate
    if(d1 == d2)
        cout << p1.first << p2.first;
    //else
    return d1 < d2;
}

int main(){
    IO;

    /*a pair is a container which store 2 values mapped to each other,
    and a vector containing multiple such pairs is called a vector of pair.*/
    vector<pair<int, int> > v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        //make_pair : a pair object whose elements first and second are set to x and y respectively
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), compare);

    cout << endl;
    for(auto c : v)
        cout << "Car : " << c.first <<", " << c.second << endl;

    return 0;
}