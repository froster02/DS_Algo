#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//O(n log(n))
void buildHeap(vector<int> &v){
    for(int i = 1; i < v.size(); i++){
        int idx = i;
        int parent = i / 2;

        while(idx > 1 && v[idx] > v[parent]) {
            swap(v[idx], v[parent]);
            idx = parent;
            parent = parent/2;
        }
    }
}

void print(vector<int> v){
    for(auto i : v){
        cout << i << ","; 
    }
    cout << endl;
}

//  O(N)


int main(){

    //vector<int> v{10, 20, 5, 6, 1, 8, 9, 4};
    vector<int> v(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int e;
        cin >> e;
        v.push_back(e);
    }

    print(v);
    buildHeap(v);
    print(v);

    return 0;
}