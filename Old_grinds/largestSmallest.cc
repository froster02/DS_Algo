#include <iostream>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<int> v(0,n);

    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i = 0; i < n; i++){
        largest = max(largest, v[i]);
        smallest = min(smallest, v[i]);
    }

    cout << "Largest element: " << largest << " smallest: " << smallest << endl;

    return 0;
}