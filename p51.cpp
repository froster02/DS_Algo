/************************************************************   |ERROR|    *******************************************************/
#include <iostream>
#include <cstdio>
#include "vector51.h"
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main(){
    IO;

        vector v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.pop_back();
        v.push_back(4);
        
        for(int i=0; i<v.size(); i++)
            cout << v[i] << "|";
        cout << endl;
        //cout << "Capacity : " << Capacity() << endl;

    return 0;
}