#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

int main(){

    cout << endl;

    stack<int> s;

    for(int i = 0; i<=5; i++)
        s.push(i);

    while(!s.empty()){
        cout << s.top() << " ,";
        s.pop();
    }

    cout << endl << endl;

    return 0;
}