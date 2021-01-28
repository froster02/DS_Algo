#include <iostream>
#include <set>
using namespace std;

int main(){

    int a[] = {1,2,3,5,4,6,6,7,8};
    int n = sizeof(a)/sizeof(int);

    set<int> s;
    for(int i = 0; i < n; i++)
        s.insert(a[i]);

    s.erase(6);

    for(set<int> :: iterator it = s.begin(); it != s.end(); it++)
        cout << *it << ", ";

    return 0;
}