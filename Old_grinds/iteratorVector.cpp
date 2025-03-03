#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cout<<endl;
    cout<<"*******************************************************************"<<endl<<endl;
    
    int n;
    cin>>n;
    vector<int> v(n);
    for(int j=0; j<v.size(); j++)
        cin>>v[j];
    
    vector<int> :: iterator i;
    for(i=v.begin(); i!=v.end(); ++i)
        cout<< *i <<" ";

    cout<<"\n*******************************************************************"<<endl<<endl<<endl;
}