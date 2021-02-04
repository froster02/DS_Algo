#include<iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int thirdMax(vector < int > & v) {

    sort(v.begin(), v.end());
    vector<int> :: iterator it;
    int l = v.size();
    it = unique(v.begin(), v.begin() + l);

    cout << endl;
    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){
        cout << *it << ", ";
    }
    cout << endl;


    return -1;
}

int main(){

    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0 ; i<n; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    //1 2 2 5 3 5

    // for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){
    //     cout << *it << endl;
    // }

    cout << thirdMax(v);

    return 0;
}