#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int chopstick(vector<int> v, int d){
    
    sort(v.begin(), v.end());

    int count = 0;

    for(int i = 0; i < v.size();   ) {
        if(abs(v[i] - v[i + 1]) <= d) {
            count++;
            i = i + 2;
        } else {
            i++;
        } 
    }
    return count;
}

int main(){

    int n, d;
    cin >> n >> d;
    vector<int> v(0);

    for(int i = 0; i < n; i++){
        int e;
        cin >> e;
        v.push_back(e);
    }

    cout << chopstick(v, d);

    return 0;
}