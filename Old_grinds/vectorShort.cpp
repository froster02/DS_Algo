#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cout<<endl;
    cout<<"*******************************************************************"<<endl<<endl;
    int vectorSize;
    cin>>vectorSize;
    vector<int> v(vectorSize,0);
    for(int i=0;i<v.size();i++)
        cin>>v[i];

    sort(v.begin(), v.end());

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
    cout<<"\n*******************************************************************"<<endl<<endl<<endl;
}