/* use of reserve() over capacity() */

#include <iostream>
#include <cstdio>
#include <vector>
#include <iterator>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main(){
    IO;

    int n;
    cin >> n;
    vector<int> v;

    // to avoid doubling of memory on pushing back new elements we use reserve() so that only after exceeding 100 it will double the memeory.
    //v.reserve(100);

    for(int i=0; i<n; i++){
        int no;
        cin >> no;
        v.push_back(no);
        cout << "changing capacity : " << v.capacity() << endl;
    }
    cout << endl << "Capacity : " << v.capacity() << endl;

    return 0;
}
