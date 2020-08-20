#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iterator>
#include <map>
#include <cmath>
#include <bit>
#include <climits>

#define max 100
#define endl "\n"
using namespace std;

int main() {

    //to take faster input
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[max] = {
        0
    };

    //size of an array
    cout << sizeof(a) << "\n";

    //number of elements in an array
    int n = sizeof(a) / sizeof(int);

    cout << n;
    return 0;
}