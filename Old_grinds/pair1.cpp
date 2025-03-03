/*
    make_pair(x, y)
*/
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iterator>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
using namespace std;

int main(){
    IO;

    pair<int, int > foo;
    pair<int, int > bar;

    foo = make_pair(10, 20);
    bar = make_pair(30, 40);

    cout << "foo : " << foo.first <<", "<< foo.second << endl;
    cout << "bar : " << bar.first <<", "<< bar.second << endl;

    return 0;
}