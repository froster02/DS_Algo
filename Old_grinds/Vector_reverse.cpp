#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
vector<int> a;
int main()
{
    int input = 0,n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        a.push_back(input);
    }
        reverse(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        cout << a[i] <<" ";
    }
    return 0;
}