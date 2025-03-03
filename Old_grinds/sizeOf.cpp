#include <iostream>
#include <cstdio>
#include <cstring>
#define max 100
#define endl "\n"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = {'1', '2', '3'};
    cout << endl << a << endl;                  //this will give output the starting address of array as it is int type
    cout << sizeof(a) << endl;

    cout << endl;

    char b[] = {'a', 'b', 'c'};
    cout << b << endl;                  //this will give output the content of array b
    cout << sizeof(b) << endl;


    return 0;
}